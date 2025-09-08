typedef struct Wind
{
    int counter;
    int upper;
} Window;
extern Window *fld;
void create(char **args);
void list();
//int fill(char **args);
//int border(char **args);
//int make(char **args);
//int vectur2d(char **args);
void FreeMemory();