%{
	#include "quad_generation.c"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>

	#define YYSTYPE char*

	void yyerror(char* s); 											
	int yylex(); 													
	extern int yylineno; 											

	FILE* icg_quad_file;
	FILE* icg_tac_file;
	int temp_no = 1;
%}


%token T_ID T_NUM

%start START


%%
START : ASSGN	    { 
					    printf("Valid syntax\n");
	 				    YYACCEPT;										
	 			    }

ASSGN : T_ID '=' E	{
						$$ = strdup($1);
						tac_code_gen($$, $3, "=", " ");
						quad_code_gen($$, $3, "=", " ");
					}
;

E : E '+' T 	{
					$$ = new_temp();
					tac_code_gen($$, $1, "+", $3);
					quad_code_gen($$, $1, "+", $3);
				}

| E '-' T 	    {
					$$ = new_temp();
					tac_code_gen($$, $1, "-", $3);
					quad_code_gen($$, $1, "-", $3);
				}
                
| T
;
	
	
T : T '*' F 	{
					$$ = new_temp();
					tac_code_gen($$, $1, "*", $3);
					quad_code_gen($$, $1, "*", $3);
				}

| T '/' F 	{
					$$ = new_temp();
					tac_code_gen($$, $1, "/", $3);
					quad_code_gen($$, $1, "/", $3);
				}

| F
;

F : '(' E ')' 	{
					$$ = $2;
				}

| T_ID 	        {
				    $$ = strdup($1);
		    	}

| T_NUM 	    {
					$$ = strdup($1);
				}

;

%%


void yyerror(char* s)
{
	printf("Error :%s at %d \n",s,yylineno);
}

int yywrap() {
    return 1;
}

int main(int argc, char* argv[])
{
	icg_tac_file = fopen("icg_tac.txt","w");
	icg_quad_file = fopen("icg_quad.txt","w");
	yyparse();
	fclose(icg_tac_file);
	fclose(icg_quad_file);
	return 0;
}