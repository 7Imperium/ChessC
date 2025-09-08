#include <stdio.h>
#include <stdlib.h>
#include <windowCMD.h>

Window *fld;
int X;
int Y;

void create(char **args){
   fld = (Window*)malloc(atoi(args[0]) * atoi(args[1]) * sizeof(Window));
   X = atoi(args[1]);
   Y = atoi(args[0]);
   for(int ngX = 0; ngX < X; ngX++){
    for(int ngY = 0; ngY < Y; ngY++){
        fld[(X*ngX)+ngY].counter = 0;
    }
   }
}

void list(){
    if(fld != NULL){
        for(int ngX = 0; ngX < X; ngX++){
            for(int ngY = 0; ngY < Y; ngY++){
                printf("%d", fld[(X*ngX)+ngY].counter);
            }
        printf("\n");
        }
    }else{
        printf("Memory is NULL\n");
    }
}
//int fill(char **args){}
//int border(char **args){}
//int make(char **args){}
//int vectur2d(char **args){}

void FreeMemory(){
    if(fld != NULL){
        free(fld);
        fld = NULL;
        printf("Free\n");
    }else{
        printf("Memory is NULL\n");
    }
}