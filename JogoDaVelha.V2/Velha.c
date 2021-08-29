#include "Velha.h"

void startMatriz(Velha b){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            b.board[i][j] = 'a';
        }
    }
}

void validCharacter(char letra){
    if(letra == 'x' || letra == '0')
        return 1;
    else
        return 0;
}

void validCoordenate(int x, int y){
    if(x >= 0 && x < 3)
        if(y >= 0 && y <3)
            return 1;
    return 0;
}

void validPos(Velha b, int x, int y){
    if(b.board[x][y] != 'x' && b.board[x][y] != '0')
        return 1;
    else
        return 0;
}

void print_board(Velha b){
    int l, c;

    printf("\n\t    0  1  2\n");
    for(l=0; l<3; l++) {
        printf("\t%d ", l);
        for(c=0; c<3; c++) {
            if(valid_character(b.board[l][c])) {
                if(c < 2)
                    printf(" %c |", b.board[l][c]);
                else
                    printf(" %c ", b.board[l][c]);
            } else {
                if(c < 2)
                    printf("   |");
                else
                    printf("   ");
            }
        }
        if(l < 2)
            printf("\n\t   ---------\n");
    }
}