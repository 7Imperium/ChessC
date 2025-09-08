#include <stdlib.h>
#include <chess.h>
#include <windowCMD.h>

#define MAX_INPUT_SIZE 256
#define MAX_ARG 10

typedef struct {
    char *name;
    void (*function)(char **args);
    int countargs;
    char *discription;
} Command;

void help();

Command commands[] = {
    {"help", help, 0, "Shows all commands and their description."},
    {"print", printboard, 0, "Show board."},
    {"cr", create, 2, "Create field(x, y)"},
    {"list", list, 0, "List field"},
    {"free", FreeMemory, 0 ,"Free Memory"},
    {"exit", NULL, 0,"Exit the program."},
    {NULL, NULL, 0, NULL}
};