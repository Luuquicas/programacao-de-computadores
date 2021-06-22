#include<stdio.h>
#include <stdlib.h>
#define TAM 3

/*
Escreva uma função em C que, dada uma matriz, retorne o valor do seu determinante.
*/

int determinante(int x[][TAM]){
    int i,j,res1=0,res2=0,res3=0,diag;
    res1 = (x[0][0]*x[1][1]*x[2][2]);
    res2 = (x[0][1]*x[1][2]*x[2][0]);
    res3 = (x[0][2]*x[1][0]*x[2][1]);
    diag = res1+res2+res3;
    res1=0;res2=0;res3=0;
    res1 = (x[0][1]*x[1][0]*x[2][2]);
    res2 = (x[0][0]*x[1][2]*x[2][1]);
    res3 = (x[0][2]*x[1][1]*x[2][0]);
    diag = diag + (res1+res2+res3);
    return diag;
}

int main(){
    int i,j,res;
    int mat[TAM][TAM];
    printf("Informe os valores na matriz:\n");
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            printf("Mat[%d][%d]: ",i,j);
            scanf("%d", &mat[i][j]);
        }
    }
    /*
    for(i=0;i<m;i++){
        for(j=0;j<2;j++){
            printf("%d\n", mat[i][j]);
        }
    }
    */
    res = determinante(mat);
    printf("RES = %d\n", res);
    return 0;
}