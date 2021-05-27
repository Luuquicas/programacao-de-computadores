#include <stdio.h>
#include <stdlib.h>

/**
 * Escreva um programa em C que leia 5 valores inteiros e imprima para cada um o seu correspondente valor absoluto.
 * */

int absoluto(int n){

    if(n < 0)
        n = n * -1;

    return n;
}

int main(){
    int num, i;

    for(i=0;i<5;i++){
        printf("Informe o valor %d:\n",i+1);
        scanf("%d", &num);
        printf("O absoluto de %d eh %d\n", num, absoluto(num));
    }

    return 0;
}