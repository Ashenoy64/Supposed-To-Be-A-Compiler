%{
    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    #include<ctype.h>
    
    extern int countn;
    extern char *yytext;
    //extern int yyerrstatus;
    void yyerror(const char *s);
    int yylex();
    int yywrap();
%}

%token VOID CHARACTER PRINTFF SCANFF INT FLOAT CHAR FOR IF ELSE TRUE FALSE NUMBER FLOAT_NUM ID LE GE EQ NE GT LT AND OR STR ADD MULTIPLY DIVIDE SUBTRACT UNARY INCLUDE RETURN DO DOUBLE MAIN WHILE SWITCH CASE BREAK DEFAULT

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
| do
| switch
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

do: DO block WHILE '(' condition ')' ';'
;

switch: SWITCH '(' expression ')' '{'  cases  '}'
;


cases: case
| case default
;

case: case case
| CASE expression ':' body ';'
| BREAK ';'
;

default: DEFAULT ':'  body ';' BREAK ';'
;






else: ELSE block 
|
;

condition: value relop value  
| TRUE  
| FALSE 
;

statement: declaration  
| array
| ID '=' expression 
| ID relop expression 
| ID UNARY  
| UNARY ID 
;

declaration:   datatype ID init  list  
| datatype ID init 
;


array: datatype array_dec
;


array_dec: ID dimensions  arr_init ',' array_dec
| ID dimensions  arr_init
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


init: '=' value  
| 
;



expression: expression arithmetic expression 
| expression relop expression 
| '(' expression arithmetic expression ')'
| '(' expression relop expression ')'
|  expression ',' expression
| value 
| ID
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
    fprintf(stderr, "Error: %s, line number: %d, token: %s\n", msg,countn,yytext);
    /*
    yyerrok;
    while (1) {
        int token = yylex();
        if (token == ';' || token == '}' || token == ')') {
            // Found a synchronization token, exit panic mode
            yyerrok;
            break;
        }
    }
    */
}