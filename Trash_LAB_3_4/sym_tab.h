#define _CHAR 1
#define _INT 2
#define _FLOAT 3
#define _DOUBLE 4
#define _VOID 0




typedef struct symbol		
{
	char* name;
	int size;			
	int len;			
	int type;			
	char* val;			
	int line;			
	int scope;			
	struct symbol* next;
}symbol;

typedef struct table		
{
	symbol* head;
}table;

static table* t;

table* init_table();	
symbol *init_symbol(char *name, int size, int type, int lineno, int scope); 		

void insert_symbol(char* name, int size, int type, int lineno,int scope); 		
int insert_val(char* name, char* v, int line);			
int check_sym_tab(char* name);			
void display_sym_tab();				
char* retrieve_val(char* name);		
int retrieve_type(char* name);		
int type_check(char* value);		