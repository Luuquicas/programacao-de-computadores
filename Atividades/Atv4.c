#include<stdio.h>
#include <stdlib.h>

/*
Escreva uma função em C que, dada uma matriz, retorne o valor do seu determinante.
*/

int determinante(int **mat,int m, int n){
    
}

int main(){
    int m,n,i,j;
    printf("Informe o tamanho da matriz: ");
    scanf("%d %d", &m, &n);
    int mat[m][n];
    printf("Informe os valores na matriz:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
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
    return 0;
}