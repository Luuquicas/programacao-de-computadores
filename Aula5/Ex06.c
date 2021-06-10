#include <stdio.h>
#include <stdlib.h>

/*
Escreva uma função que receba de parâmetros uma matriz e suas dimensões e retorne 0 caso a matriz não seja simétrica e 1 caso seja simétrica. Em uma matriz simétrica, qualquer elemento A[i][j] possui o mesmo valor de A[j][i]. 
*/

int mat_simetrica(int **mat, int i, int j){
    int l,c;
    for(l=0;l<i;l++){
        for(c=0;c<j;c++){
            if(mat[i][j] != mat[j][i]){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    int mat[2][2],i,j,res;
    printf("informe os valores da matriz:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d", &mat[i][j]);
        }
    }
    res=mat_simetrica(mat,i,j);

    if(res == 1)
        printf("A matriz eh simetrica!\n");
    else
        printf("A matriz n eh simetrica!\n");    
    return 0;
}