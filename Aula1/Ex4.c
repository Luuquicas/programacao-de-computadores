#include <stdio.h>

/*
Faça um algoritmo que leia uma quantidade indeterminada de números inteiros positivos e identifique qual foi o maior número digitado. O final da sequência de números é indicado pelo valor -1.
*/

int main(){

int num,maior=0;

scanf("%d", &num);

while(num != -1){
    scanf("%d", &num);
    if(num > maior){
        maior = num;
    }
}

printf("O maior numero eh %d", maior);

return 0;
}