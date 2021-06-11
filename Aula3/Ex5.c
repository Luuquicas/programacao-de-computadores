#include <stdio.h>
#include <stdlib.h>

/**
 * Escreva um programa que leia 5 números inteiros positivos (utilize uma função que leia esse número e verifique se ele é positivo). Para cada número informado escrever a soma de seus divisores (exceto ele mesmo).
 * */

int absoluto(int n){

    if(n < 0)
        n = n * -1;

    return n;
}

int divisor(int n){
    int i,soma=0;

    for(i=0;i<n;i++){
        if(n%i == 0){
            soma += i;
        }
    }
    return soma;
}

int main(){
    int num, i,res;

    for(i=0;i<5;i++){
        printf("Informe o valor %d:\n",i+1);
        scanf("%d", &num);
        //printf("O absoluto de %d eh %d\n", num, absoluto(num));
        res=divisor(num);
        printf("A soma dos divisores de %d eh %d\n", num, res);
    }

    return 0;
}