#!/bin/bash

lex lexer.l
yacc -d parser.y
gcc -g y.tab.c lex.yy.c -o parser


./parser < test.c


clear
echo "--------- 3 Address Code ---------"
cat  icg_tac.txt

echo
echo "----------------- Quad Code -----------------"
cat  icg_quad.txt
