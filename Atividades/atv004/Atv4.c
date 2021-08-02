#include<stdio.h>
#include <stdlib.h>
#define TAM 3

/*
Escreva uma função em C que, dada uma matriz, retorne o valor do seu determinante.
*/

int main(){
    int i,j,k,cont1=0,cont2=0;
    float mat[TAM][TAM], somaD=0, somaE=0, det;
    printf("Informe os valores da matriz 3x3:\n");
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            printf("Valor[%d][%d]: ", i+1, j+1);
            scanf("%f", &mat[i][j]);
        }
    }

    //Leitura da direita para a esquerda
    j=0,k=0;
    int val=1;
    for(i=0; i<=(TAM*TAM);i++){
        if(j == TAM){
            j = 0;
            cont2++;
            k = cont2;
        }
        if(k == TAM){
            k = 0;
        }
        val *= mat[j][k];
        j++;
        k++;
        cont1++;
        if(cont1 == TAM){
            somaD +=  val;
            val = 1;
            cont1 = 0;
        }
    }

    //Leitura da esquerda para a direita
    j = 0;
    k = TAM-1;
    val = 1;
    cont1 = 0;
    cont2 = TAM-1;
    somaE = 0;
    for(i=0; i<= (TAM*TAM); i++){
        if(j == TAM){
            j = 0;
            cont2--;
            k = cont2;
        }
        if(k < 0){
            k = TAM-1;
        }
        val *= mat[j][k];
        j++;
        k--;
        cont1++;
        if(cont1 == TAM){
            somaE += val;
            val = 1;
            cont1 = 0;
        }
    }
    det = somaD + (somaE*(-1));
    printf("Determinante: %.2f\n", det);
    return 0;
}