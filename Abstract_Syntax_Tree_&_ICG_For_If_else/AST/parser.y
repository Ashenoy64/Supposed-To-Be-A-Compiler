%{
	#include "abstract_syntax_tree.c"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	void yyerror(char* s); 											
	int yylex(); 													
	extern int yylineno; 											
%}

%union																
{
	char* text;
	expression_node* exp_node;
}



%token <text> T_ID T_NUM IF ELSE

%type <text> RELOP

%type <exp_node> E T F START ASSGN S C SEQ 

/* specify start symbol */
%start START


%%
START : SEQ {
	display_exp_tree($1);
	YYACCEPT;
};

SEQ : S SEQ { $$ = init_exp_node("seq", $1, $2,  NULL);}
| S  {$$ = $1;}
;

S : IF '(' C ')' '{' SEQ '}' {
		$$ = init_exp_node(strdup("if"), $3, $6, NULL);
	}

| IF '(' C ')' '{' SEQ '}' ELSE '{' SEQ '}' {
		$$ = init_exp_node(strdup("if-else"), $3, $6, $10);
	}

| ASSGN { $$ = $1;}
;

C : F RELOP F {
	$$=init_exp_node(strdup($2), $1, $3, NULL);
}
;

RELOP : '<' 	{ $$ = "<";}
| '>' 			{ $$ = ">";}
| '>''=' 		{ $$ = ">=";}
| '<''=' 		{ $$ = "<=";} 
| '=''=' 		{ $$ = "==";}
| '!''=' 		{ $$ = "!=";}
;


ASSGN : T_ID '=' E ';'	{
						$$ = init_exp_node(strdup("=") ,init_exp_node(strdup($1) ,NULL ,NULL ,NULL) ,$3 ,NULL);
					}
;

E : E '+' T 	{
				$$ = init_exp_node(strdup("+") ,$1 ,$3 ,NULL);
				}

| E '-' T 	{
				$$ = init_exp_node(strdup("-") ,$1 ,$3 ,NULL);
			}

| T 	{ $$ = $1; }
	;
	
	
T : T '*' F 	{
					$$ = init_exp_node(strdup("*") ,$1 ,$3 ,NULL);
				}

| T '/' F 	{
				$$ = init_exp_node(strdup("/") ,$1 ,$3 ,NULL);	
			}

| F  { $$ = $1; }
;

F : '(' E ')' { $$ = $2; }

| T_ID 	{
			$$ = init_exp_node(strdup($1) ,NULL ,NULL ,NULL);
		}

| T_NUM {
			$$ = init_exp_node(strdup($1) ,NULL ,NULL ,NULL);
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
	printf("PostOrder:\n");
	yyparse();
	return 0;
}