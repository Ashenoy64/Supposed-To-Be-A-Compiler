%{
    #define YYSTYPE char*
    #include "y.tab.h"
    #include <stdio.h>
    extern void yyerror(const char *);
%}

%option yylineno

alpha [a-zA-Z_]
digit [0-9]
unary "++"|"--"

%%

"printf"                    { return PRINTFF; }
"scanf"                     { return SCANFF; }
"int"                       { return INT; }
"float"                     { return FLOAT; }
"double"                    { return DOUBLE; }
"char"                      { return CHAR; }
"void"                      { return VOID; }
"while"                     { return WHILE; }
"do"                        { return DO; }
"return"                    { return RETURN; }
"for"	                    { return FOR; }
"if"	                    { return IF; }
"else"	                    { return ELSE; }
"main"                      { return MAIN; }
"switch"                    { return SWITCH;}                   
"case"                      { return CASE; }
"break"                     { return BREAK; }
"default"                   { return DEFAULT;}
^"#include"[ ]*<.+\.h>      { return INCLUDE; }
"true"                      { return TRUE; }
"false"                     { return FALSE; }
[-]?{digit}+                { yylval=strdup(yytext);  return NUMBER; }
[-]?{digit}+\.{digit}{1,6}  { yylval=strdup(yytext);  return FLOAT_NUM; }
{alpha}({alpha}|{digit})*   { return ID; }
{unary}                     { return UNARY; }
"<="                        { return LE; }
">="                        { return GE; }
"=="                        { return EQ; }
"!="                        { return NE; }
">"	                        { return GT; }
"<"	                        { return LT; }
"&&"	                    { return AND; }
"||"	                    { return OR; }
"+"                         { return ADD; }
"-"                         { return SUBTRACT; }
"/"                         { return DIVIDE; }
"*"                         { return MULTIPLY; }
\/\/.*                      { ; }
\/\*(.*\n)*.*\*\/           { ; } 
[ \t]*                      { ; }
[\n]                        {  }
.	                        { return *yytext;}
["].*["]                    { yylval=strdup(yytext);   return STR; }
['].[']                     { return CHARACTER; }

%%

int yywrap() {
    return 1;
}