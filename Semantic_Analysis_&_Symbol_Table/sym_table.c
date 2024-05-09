#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sym_table.h"

table* init_table()	
{
	table* t = (table*)malloc(sizeof(table));
	t->head = NULL;
	return t;
}

symbol* init_symbol(char* name, int size, int type, int lineno,int scope) 
{
	symbol* s = (symbol*)malloc(sizeof(symbol));
	s->name = (char*)malloc(sizeof(char)*(strlen(name)+1));
	strcpy(s->name,name);
	s->size = size;
	s->type = type;
	s->line = lineno;
	s->scope = scope;
	s->val=(char*)malloc(sizeof(char)*10);
	strcpy(s->val,"~");
	s->next = NULL;
	return s;
}

void insert_symbol(char* name, int size, int type, int lineno,int scope)	
{
	
	symbol* s = init_symbol(name, size, type, lineno,scope);
	if(t->head == NULL)		
	{
		t->head = s;
		return;
	}
	symbol* curr = t->head;
	while(curr->next!=NULL)		
	{
		curr = curr->next;
	}
	curr->next = s;
}


void insert_val(char* name, char* v, int line)	
{
	
	if(v=="~")			
		return;
	if(t->head == NULL)
	{
		return;
	}
	symbol* curr = t->head;
	while(curr!=NULL)		
	{
		if(strcmp(curr->name,name)==0)
		{
			strcpy(curr->val,v);
			curr->line=line;
			return;
		}	
		curr = curr->next;
	}
}

char* retrieve_val(char* name)	
{
	char* val="~";
	if(t->head == NULL)
	{
		return val;
	}
	symbol* curr = t->head;
	while(curr!=NULL)		
	{
		if(strcmp(curr->name,name)==0)
		{
			val=curr->val;
			return val;
		}	
		curr = curr->next;
	}
	return val;
}

int retrieve_type(char* name)	
{
	int type=-1;
	if(t->head == NULL)
	{
		return type;
	}
	symbol* curr = t->head;
	while(curr!=NULL)		
	{
		if(strcmp(curr->name,name)==0)
		{
			type=curr->type;
			return type;
		}	
		curr = curr->next;
	}
	return type;
}

int check_sym_tab(char* name)		
{					
	if(t->head == NULL)		
	{
		return 0;
	}
	symbol* curr = t->head;
	while(curr!=NULL)
	{
		if(strcmp(curr->name,name)==0)
		{
			
			return 1;
		}
		curr = curr->next;
	}
	
	return 0;
}

void display_sym_tab()			
{
	symbol* curr = t->head;
	if(curr == NULL)
		return;
	printf("Name\tsize\ttype\tlineno\tscope\tvalue\n");
	while(curr!=NULL)
	{		
		printf("%s\t%d\t%s\t%d\t%d\t%s\n", curr->name, curr->size, get_type_name(curr->type), curr->line, curr->scope,curr->val);
		curr = curr->next;
	}
}

char* get_type_name(int type){
	switch(type)
	{
		case INT:
			return "int";
		case CHAR:
			return "char";
		case DOUBLE:
			return "double";
		default:
			return "NULL";
	}
}

int type_check(char* value)		
{
	char *s=strchr(value,'\"');	
	if(s!=NULL)
		return 1; 
	char *f=strchr(value,'.');	
	if(f!=NULL)
		return 3;
	return 2;			
}

int size(int type)
{
	if(type==3)
		return 4;
	if(type==4)
		return 8;
	return type;
}

