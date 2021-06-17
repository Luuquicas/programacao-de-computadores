#include <stdio.h>
#include <stdlib.h>
#define dim 3

void printBoard(int board[][dim]){
    int i,j;
    putchar('\n');
    for(i=0;i<dim;i++){
        for(j=0;j<dim;j++){
            if(board[i][j] == 0){
                printf("   ");
            }else if(board[i][j] == 1){
                printf(" X ");
            }else{
                printf(" O ");
            }
            if(j != (dim-1)){
                printf("|");
            }         
        }
        putchar('\n');
    }
    putchar('\n');
}

int checkLocal(int board[][dim], int x, int y){
    if(x<0 || x>(dim-1) || y<0 || y>(dim-1) || board[x][y]!=0){

    }
}

int main(){
    int board[dim][dim],i,j;

    /*for(i=0;i<dim;i++){
        for(j=0;j<dim;j++){
            printf("Informe o valor na posicao [%d][%d]: ",i,j);
            scanf("%d", &board[i][j]);
            printBoard(board);
        }
    }*/

    printBoard(board);
    

    return 0;
}