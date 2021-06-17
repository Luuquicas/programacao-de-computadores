#include <stdio.h>
#include <stdlib.h>
#define dim 3

void printBoard(char board[][dim]){
    int i,j;
    putchar("\n");
    for(i=0;i<dim;i++){
        for(j=0;j<dim;j++){
            if(board[i][j] == 0)
                printf(" X ");
            else
                printf(" O ");
            if(j != (dim-1))
                printf("|");         
        }
        putchar("\n");
    }
    putchar("\n");
}

int main(){
    char board[dim][dim];/*={'x','o','x',
                      'x','x','o',
                      'x','o','o'};*/
    printBoard(board);
    

    return 0;
}