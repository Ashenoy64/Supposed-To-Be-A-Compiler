%{
    #include "sym_tab.c"
    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    #include<ctype.h>
    #define YYSTYPE char*
    
    int type = -1;
    char *vval="~";
    int vtype=-1; 
    int scope = 0;
    int statementType = -1;
    char *temp;

    #define VARDEC 0
    #define ARRDEC 1
    #define EXP 2
    #define REXP 3
    #define POST 4
    #define PRE 5



    extern int yylineno;
    extern char *yytext;
    int yyerrstatus =0;
    
    void yyerror(const char *s);
    int yylex();
    int yywrap();

%}

%token VOID CHARACTER PRINTFF SCANFF INT FLOAT CHAR FOR IF ELSE TRUE FALSE NUMBER FLOAT_NUM ID LE GE EQ NE GT LT AND OR STR ADD MULTIPLY DIVIDE SUBTRACT UNARY INCLUDE RETURN DO DOUBLE MAIN WHILE SWITCH CASE BREAK DEFAULT
%%

program: headers main '{' {scope++;}body return '}'  {scope--;}
;

headers: headers headers 
| INCLUDE   
;

main: datatype MAIN '(' ')' 
;

datatype: INT  {type = _INT;}
| FLOAT {type = _FLOAT;}
| CHAR  {type = _CHAR;}
| VOID  {type = _VOID;}
| DOUBLE {type = _DOUBLE;}
;


body: control
| statement ';'  
| body body 
| PRINTFF '(' STR ')' ';' 
| SCANFF '(' STR ',' '&' ID ')' ';' 
| '{'  {scope++;} body '}' {scope--;}
;


control: for 
| while 
| if  
| do
| switch
;

block: '{' {scope++;} body '}' {scope--;} 
| statement ';'  
| control
;


for: FOR '(' statement ';' condition ';' statement ')' block  
;

if: IF '(' condition ')' block else 
;

while: WHILE '(' condition ')' block 
; 

do: DO block WHILE '(' condition ')' ';'
;

switch: SWITCH '(' expression ')' '{' cases '}'
;

cases: case 
| case default
;

case: case case
| CASE expression ':' body
| BREAK ';'
;

default: DEFAULT ':' body 
| DEFAULT ':' body BREAK ';'
;



else: ELSE block 
|
;

condition: value relop value  
| TRUE  
| FALSE 
;

statement: declaration  { statementType = VARDEC;}
| array {statementType = ARRDEC;}
| ID '=' expression  {statementType = EXP;}
| ID relop expression  {statementType = REXP;}
| ID UNARY  {statementType=POST;}
| UNARY ID  {statementType=PRE;}
;

declaration:   datatype ID {
                                if(check_sym_tab($2))	//if variable is in table then variable is being re-declared
				                {
					                printf("Variable %s already declared\n",$1);
					                yyerror($1);
				                }
				                else
				                {
				                    insert_symbol($2,size(type),type,yylineno,scope);
				                    insert_val($2,vval,yylineno);
				                    vval="~";	//revert to default for checking
				                    type=-1;
				                }
                                temp = $2;
                            } init  list  
| datatype ID {
                    if(check_sym_tab($2))	//if variable is in table then variable is being re-declared
				    {
					    printf("Variable %s already declared\n",$1);
					    yyerror($2);
				    }
				    else
				    {
				        insert_symbol($2,size(type),type,yylineno,scope);
				        insert_val($2,vval,yylineno);
				        vval="~";	//revert to default for checking
				        type=-1;
				    }
                } init 
;


array: datatype array_dec
;


array_dec: ID{
                    if(check_sym_tab($1))	//if variable is in table then variable is being re-declared
				    {
					    printf("Variable %s already declared\n",$1);
					    yyerror($1);
				    }
				    else
				    {
				        insert_symbol($1,size(type),type,yylineno,scope);
				        insert_val($1,vval,yylineno);
				        vval="~";	//revert to default for checking
				        type=-1;
				    }
            } dimensions  arr_init ',' array_dec
| ID{
                    if(check_sym_tab($1))	//if variable is in table then variable is being re-declared
				    {
					    printf("Variable %s already declared\n",$1);
					    yyerror($1);
				    }
				    else
				    {
				        insert_symbol($1,size(type),type,yylineno,scope);
				        insert_val($1,vval,yylineno);
				        vval="~";	//revert to default for checking
				        type=-1;
				    }
    } dimensions  arr_init
;

dimensions: '['expression']' dimensions
| '['expression']'
;

arr_init: '=' '{' num_list '}'
|
;

num_list: expression ',' num_list
| expression
| 
;



list: ',' ID init  list 
| ',' ID init
;


init:  '=' expression {
                insert_val(temp,vval,yylineno);
				vval="~";		//to make sure previous values aren't inserted into other identifiers
				type=-1;
    }
| 
;



expression: expression relop e
| e {vval = $1;}
;

e: e ADD t  { 
			if(vtype==2)				//integer
				sprintf($$,"%d",(atoi($1)+atoi($3)));
			else if(vtype==3)			//float or double
				sprintf($$,"%lf",(atof($1)+atof($3)));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror($$);
				$$="~";
			}
		}
| e SUBTRACT t  { 
			if(vtype==2)				//integer
				sprintf($$,"%d",(atoi($1)-atoi($3)));
			else if(vtype==3)			//float or double
				sprintf($$,"%lf",(atof($1)-atof($3)));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror($$);
				$$="~";
			}
		}
| t {$$=$1;}
;

t: t MULTIPLY f { 
			if(vtype==2)				//integer
				sprintf($$,"%d",(atoi($1)*atoi($3)));
			else if(vtype==3)			//float or double
				sprintf($$,"%lf",(atof($1)*atof($3)));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror($$);
				$$="~";
			}
		}
| t DIVIDE f { 
			if(vtype==2)				//integer
				sprintf($$,"%d",(atoi($1)/atoi($3)));
			else if(vtype==3)			//float or double
				sprintf($$,"%lf",(atof($1)/atof($3)));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror($$);
				$$="~";
			}
		}
| f {$$=$1;}
;

f: '(' expression ')'
| value
;

relop: LT
| GT
| LE
| GE
| EQ
| NE
;

value: NUMBER {    
    $$=strdup($1); 
    			vtype=type_check($1);
    			if(vtype!=type && type!=-1)	//checks for matching type
			{
				printf("Mismatch type\n");
				yyerror($1);
			}
 }
| FLOAT_NUM {
     $$=strdup($1); 
    			vtype=type_check($1);
    			if(vtype!=type && type!=-1)	//checks for matching type
			{
				printf("Mismatch type\n");
				yyerror($1);
			}
}
| CHARACTER {
    $$=strdup($1); 
    			vtype=1;
			if(vtype!=type)		//checks for matching type
			{
				printf("Mismatch type\n");	
				yyerror($1);
			}
}
| ID {
        if(check_sym_tab($1))		//check if variable is in symbol table
			{
				char* check=retrieve_val($1);
				if(check=="~")		//if variable has no value then can't be used for assignment
				{
					printf("Variable %s not initialised",$1);
					yyerror($1);
				}
				else
				{	
					$$=strdup(check);
					vtype=type_check(check);	
					if(vtype!=type && type!=-1)	//checks for matching type
					{
						printf("Mismatch type\n");
						yyerror($1);
					}	
				}
	}
}
;

return: RETURN value ';'  
; 

%%

int main() {
    t=init_table();
    yyparse();
    display_sym_tab();
    return 0;
}


//panic mode recovery


void yyerror(const char* msg) {
    static int panic_count = 0; 
    if(panic_count>5)
    return;

    while (1) {
        int token = yylex();
        if (token == ';' || token == '}' || token == ')') {
            yyerrok; 
            panic_count++;
            yyparse(); 
            break;
        }
        else if(token == 0)
        {
            return;
        }
    }
}



