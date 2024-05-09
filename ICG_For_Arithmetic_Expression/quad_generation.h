extern FILE* icg_quad_file;
extern FILE* icg_tac_file;
extern int temp_no;

void tac_code_gen(char* a, char* b, char* op, char* c);
void quad_code_gen(char* a, char* b, char* op, char* c);
char* new_temp();