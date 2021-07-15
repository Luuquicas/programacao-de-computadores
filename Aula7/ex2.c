#include <stdio.h>
#include <stdlib.h>
//Crie um programa que conte a quantidade de dígitos de um número utilizando recursividade.
//Exemplo: 32 => 2, 1979 => 4, 123456 => 6

int recursivo(int num){
    if(num == 0)
        return 0;
    return qDigitos(num/10)+1;
}

int qDigitos(int num){
    if(num == 0)
        return 1;
    return qDigitos(num/10)+1;
}

int main(){
    int num, qtd;
    printf("Informe um valor: ");
    scanf("%d", &num);
    qtd = qDigitos(num);
    printf("A qntd de digitos de %d eh %d\n", num, qtd);
}