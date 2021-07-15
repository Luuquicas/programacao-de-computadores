#include <stdio.h>
#include <stdlib.h>
//Crie um programa que calcule o mdc entre dois números a e b utilizando o algoritmo de Euclides

int mdc(int a, int b){
    if(b == 0)
        return a;
    return mdc(b, a%b);
}

int main(){
    int a, b, res;
    printf("Informe dois valores: ");
    scanf("%d %d", &a, &b);
    res = mdc(a, b);
    printf("MDC :: %d", res);
    return 0;
}