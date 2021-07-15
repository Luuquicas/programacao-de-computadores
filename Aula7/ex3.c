#include <stdio.h>
#include <stdlib.h>

//Crie um programa que calcule o valor da potência xn​

float potency(float base, float pot){
    if(pot == 0)
        return 1;
    return base*(potency(base,pot-1));
}

int main(){
    float base, potencia, res;
    printf("Informe a base e a potencia: ");
    scanf("%f %f", &base, &potencia);
    res = potency(base,potencia);
    printf("%.0f", res);
    return 0;
}