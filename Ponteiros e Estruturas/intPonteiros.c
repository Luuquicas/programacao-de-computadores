#include <stdio.h>

int main(){

    int x;
    x = 10;

    int *ponteiro;
    ponteiro = &x;

    //Printa o endereço da variável
    printf("Endereco de x = %i\n", ponteiro);
    //Printa o valor da variável
    printf("Valor de x = %i\n", *ponteiro);


    getchar();
    return 0;
}