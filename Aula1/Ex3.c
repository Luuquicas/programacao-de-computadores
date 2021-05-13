#include <stdio.h>

/*
Faça um algoritmo que receba um número inteiro e verifique se o mesmo é um número primo ou não.
*/

int main(){

int num;

printf("Informe um numero:");
scanf("%d", &num);

if(num%2 == 0){
    printf("O numero %d nao eh primo", num);
}else{
    printf("O numero %d eh primo", num);
}
}