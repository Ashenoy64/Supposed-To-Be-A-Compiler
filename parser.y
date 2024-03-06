%{
    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    #include<ctype.h>
    
    extern int countn;
    extern char *yytext;
   
    void yyerror(const char *s);
    int yylex();
    int yywrap();
%}

%token VOID CHARACTER PRINTFF SCANFF INT FLOAT CHAR FOR IF ELSE TRUE FALSE NUMBER FLOAT_NUM ID LE GE EQ NE GT LT AND OR STR ADD MULTIPLY DIVIDE SUBTRACT UNARY INCLUDE RETURN DO DOUBLE MAIN WHILE

%%

program: headers main '{' body return '}'  
;

headers: headers headers 
| INCLUDE   
;

main: datatype MAIN '(' ')' 
;

datatype: INT  
| FLOAT
| CHAR 
| VOID 
| DOUBLE 
;


body: control
| statement ';'  
| body body 
| PRINTFF '(' STR ')' ';' 
| SCANFF '(' STR ',' '&' ID ')' ';' 
|  
;


control: for 
| while 
| if  
;

block: '{' body '}' 
| statement ';'  
| control
;


for: FOR '(' statement ';' condition ';' statement ')' block  
;

if: IF '(' condition ')' block else 
;

while: WHILE '(' condition ')' block 
; 



else: ELSE block 
|
;

condition: value relop value  
| TRUE  
| FALSE 
;

statement: declaration  
| ID '=' expression 
| ID relop expression 
| ID UNARY  
| UNARY ID 
;

declaration:   datatype ID init  list  
| datatype ID init 
;

list: ',' ID init  list 
| ',' ID init
;

init: '=' value  
| 
;

expression: expression arithmetic expression 
| expression relop expression 
| '(' expression arithmetic expression ')'
| '(' expression relop expression ')'
| value 
;

arithmetic: ADD 
| SUBTRACT
| MULTIPLY 
| DIVIDE 
;

relop: LT
| GT
| LE
| GE
| EQ
| NE
;

value: NUMBER
| FLOAT_NUM
| CHARACTER
| ID
;

return: RETURN value ';'  
; 

%%

int main() {
    yyparse();
}

void yyerror(const char* msg) {
    fprintf(stderr, "Error: %s, line number: %d, token: %s\n", msg,countn+1,yytext);
    
}