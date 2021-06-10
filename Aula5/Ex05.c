#include <stdio.h>
#include <stdlib.h>

/*
Escreva uma função que receba um vetor, o tamanho do vetor e um valor n como argumentos e retorne a posição da primeira ocorrência do valor n no vetor. Retorne -1 caso o valor não seja encontrado.
*/

int busca_valor(int *vet, int tam, int n){
    int i,pos=-1;
    for(i=0;i<tam;i++){
        if(n == vet[i]){
            pos=i;
            return pos;
        }
    }
    return pos;
}

int main(){
    int vet[5],n,i,res;

    puts("Informe os valores do vetor: ");
    for(i=0;i<5;i++){
        scanf("%d", &vet[i]);
    }
    puts("Informe o valor a ser encontrado: ");
    scanf("%d", &n);

    res=busca_valor(vet,i,n);
    printf("O valor %d apareceu na posicao %d", n, res); 

    return 0;
}