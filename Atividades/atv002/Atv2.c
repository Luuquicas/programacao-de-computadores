#include <stdio.h>
#include <stdlib.h>
/*
1- Escreva um programa em C, utilizando o conceito de funções, que leia N números inteiros (sendo N informado pelo usuário) e realize as seguintes ações:

a) Verificar se cada valor de entrada é inteiro e positivo (utilize uma função para isso);

b) Escreva a soma dos seus divisores, exceto o próprio número (utilize uma função para isso).
*/

int verify(int num){
    if(num>0){
        return num;
    }else{
        printf("%d eh negativo!\n", num);
    }
}

int divisor(int num){
    int i=1,soma=0;
    printf("Os divisores de %d: \n", num);
    while(i<num){
        if(num%i == 0){
            soma += i;
            printf("%d, ", i);
        }
        i++;
    }
    return soma;
}

int main(){
    int n,i,num;
    printf("Informe a qtd de numeros: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &num);
        verify(num);
        printf("\nA soma dos divisores: %d\n", divisor(num));
    }

    return 0;
}