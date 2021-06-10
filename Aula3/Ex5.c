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
    int i=1,soma=0;

    while(i<n){
        if(n%i == 0){
            soma += i;
        }
        i++;
    }
    return soma;
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