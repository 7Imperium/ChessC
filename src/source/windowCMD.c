#include <stdio.h>
#include <stdlib.h>
#include <windowCMD.h>

Window *fld;

void create(char **args){
   fld = (Window*)malloc(atoi(args[0]) * atoi(args[1]) * sizeof(int));
   fld->X = atoi(args[0]);
   fld->Y = atoi(args[1]);

}

void list(){
    for(int ngX = 0; ngX <= fld->X; ngX++){
        for(int ngY = 0; ngY <= fld->Y; ngY++){

        }
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