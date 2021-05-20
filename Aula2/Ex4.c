#include <stdio.h>

/*
Escreva uma função que converta graus Celsius para Farenheit. Escreva outra função que faça a conversão inversa.
*/

float conversao(float temp, char op){

    float res;

    if(op == 'c'){
        res=(temp-32)/1.8;
    }else if(op == 'f'){
        res=(temp*1.8)+32;
    }
    return res;
}

int main(){
    char op;
    float temp,res;

    printf("Informe C para conversao em Celsius e F para Fahrenheit:\n");
    scanf("%c", &op);

    switch(op){

        case 'c':
        printf("Informe a temperatura em farenheit:\n");
        scanf("%f", &temp);

        res = conversao(temp,op);
        printf("A temperatura %.1fF = %.1fC", temp, res);
        break;

        case 'f':
        printf("Informe a temperatura em Celsius:\n");
        scanf("%f", &temp);

        res =  conversao(temp,op);
        printf("A temperatura %.1fC = %.1fF", temp, res);
        break;

        default:
        printf("Opcao incorreta.");
        break;
    }

    return 0;
}