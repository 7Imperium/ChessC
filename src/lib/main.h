#include <stdlib.h>

#define MAX_INPUT_SIZE 256
#define MAX_ARG 10

typedef struct {
    char *name;
    void (*function)(char **args);
    int countargs;
    char *discription;
} Command;

void help(char **args);

Command commands[] = {
    {"help", help, 0, "Показывает все команды и их описание."},
    {"exit", NULL, 0,"Выход из программы."},
    {NULL, NULL}
};