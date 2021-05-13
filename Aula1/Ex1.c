#include <stdio.h>

/*
Elabore um algoritmo  que determine se um ano é bissexto. Obs.: Um ano será bissexto se ele for divisível por 400 ou se ele for divisível por 4 e não por 100.
*/

int main()
{
int ano;
printf("Informe um ano: ");
scanf("%d", &ano);

if(ano%400 == 0 || ano%4 == 0 && ano%100 != 0){
    printf("O ano %d eh bissexto.", ano);
}else{
    printf("O ano %d nao eh bissexto.", ano);
}
}