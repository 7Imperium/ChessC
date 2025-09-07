#include <stdio.h>
#include <chess.h>

char *plist = "PRNBQK prnbqk";
int board[8][8];

void printboard(){
    fillboard();
    for(int i = 0; i < 8; i++){
        printf(" %d ", 8-i);
        for(int n = 0; n < 8; n++){
            if((i+n)%2 == 0){
                if(board[i][n] == 0){
                    printf("███");
                }else{
                    printf("█%c█", plist[board[i][n]-1]);
                }
            }else{
                if(board[i][n] == 0){
                    printf("░░░");
                }else{
                    printf("░%c░", plist[board[i][n]-1]);
                }
                
            }
        }
        printf("\n");
    }
    printf("   ");
    for(int i = 0; i < 8; i++){
        printf(" %c ", 97+i);
    }
    printf("\n");
}
int fillboard(){
    for(int x = 0; x < 8; x++){
        for(int y = 0; y < 8; y++){
            board[x][y] = 0;
            if(x == 0 || x == 7){
                board[x][y] = 2+y+x;
                if(y >= 5){
                    board[x][y] = 9+x-y;
                }
            }else if(x == 1){
                board[x][y] = 1;
            }else if(x == 6){
                board[x][y] = 8;
            }
        }
    }
    return 0;
}