#include<stdio.h>
#include <stdlib.h>
#define TAM 3

/*
Escreva uma função em C que, dada uma matriz, retorne o valor do seu determinante.
*/

int main(){
    int m[TAM][TAM], i, j;
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            scanf("%d", &m[i][j]);
        }
    }

    return 0;
}