#include<stdio.h>
#include<stdlib.h>

/*
Escreva uma função que retorne o valor de n!.
*/

int fatorial(int n){

    int resultado, i;
    resultado = 1;
    for(i=n;i>=1;i--){
        resultado=resultado*i;
    }
    return resultado;
}

int main(){

    int numero,fat;

    printf("Informe o numero:\n");
    scanf("%d",&numero);
    fat=fatorial(numero);
    printf("O fatorial de %d eh %d\n",numero,fat);

    return 0;
}