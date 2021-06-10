#include <stdio.h>
#include <stdlib.h>

/**
 * Escreva uma função potencia(base, expoente) que, quando chamada, retorna baseˆexpoente. Por exemplo, potencia(3,4) deve retornar 81. Assuma que expoente é um inteiro maior ou igual a 1.
 * */

int potencia(int base, int expoente){

    int aux=1,i=0;

    while(i < expoente){
        aux = aux*base;
        i++;
    }
    return aux;

}

int main(){
    int base,expoente,res;
    printf("Informe a base e o expoente:\n");
    scanf("%d %d", &base, &expoente);

    res = potencia(base, expoente);

    printf("%d no expoente %d eh: %d", base, expoente, res);

    return 0;
}