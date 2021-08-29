#ifndef VELHA_H
#define VELHA_H

typedef struct velha{
    char board[3][3];
}Velha;

void printBoard(Velha*);
void startMatriz(Velha);
void validCharacter(char);
void validCoordenate(int, int);
void validPos(Velha, int, int);
#endif