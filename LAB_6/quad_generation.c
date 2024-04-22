#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "quad_generation.h"

void tac_code_gen(char* a, char* b, char* op, char* c)
{
    if(strcmp(op,"=")==0)
    {
        fprintf(icg_tac_file, "%s = %s \n", a, b);
        return;   
    }
	fprintf(icg_tac_file, "%s = %s %s %s\n", a, b, op, c);
}

void quad_code_gen(char* a, char* b, char* op, char* c)
{
	fprintf(icg_quad_file, "%s,%s,%s,%s\n", op, b, c, a);
}

char* new_temp()
{
	char* temp = (char*)malloc(sizeof(char)*4);
	sprintf(temp, "t%d", temp_no);
	++temp_no;
	return temp;
}