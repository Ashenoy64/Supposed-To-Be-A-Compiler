#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "quad_generation.h"


void tac_code_gen(char* a, char* b, char* op, char* c)
{
    
	if(strcmp(op,"goto")==0)
	{
		fprintf(icg_tac_file, "%s %s \n", op, a);
        return; 
	}
	else if(strcmp(op,"Label")==0)
	{
		fprintf(icg_tac_file, "%s : %s \n", op, a);
        return; 
	}
	else if(strcmp(op,"if")==0)
	{
		fprintf(icg_tac_file, "%s  %s %s \n", op, b,a);
        return;
	}
	else if(strcmp(op,"=")==0)
    {
        fprintf(icg_tac_file, "%s = %s \n", a, b);
        return;   
    }
	else
	fprintf(icg_tac_file, "%s = %s %s %s\n", a, b, op, c);
}

void quad_code_gen(char* a, char* b, char* op, char* c)
{
	fprintf(icg_quad_file, "%-10s|%-10s|%-10s|%-10s|\n", op, b, c, a);
	tac_code_gen(a,b,op,c);
}



char* new_temp()
{
		char* tempNew = (char*)malloc(sizeof(char)*4);
		sprintf(tempNew,"t%d",temp_no);	
		temp_no++;
		return tempNew;
}

char* new_label()
{
		char* label = (char*)malloc(sizeof(char)*4);
		sprintf(label,"L%d",label_no);
		label_no++;
		return label;
}