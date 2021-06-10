#include <stdio.h>
#include <stdlib.h>

/*
Escreva uma função que receba um vetor, o tamanho do vetor e um valor n como argumentos e retorne a quantidade de vezes que o valor n aparece no vetor.
*/
int comp_valor(int *vet, int tam, int n){
    int i,cont=0;
    for(i=0;i<tam;i++){
        if(n == vet[i]){
            cont++;
        }
    }
    return cont;
}


int main(){
    int vet[5],n,i,res;

    puts("Informe os valores do vetor: ");
    for(i=0;i<5;i++){
        scanf("%d", &vet[i]);
    }
    puts("Informe o valor a ser encontrado: ");
    scanf("%d", &n);

    res=comp_valor(vet,i,n);
    printf("O valor %d apareceu %d vezes no vetor", n, res);   

    return 0;
}