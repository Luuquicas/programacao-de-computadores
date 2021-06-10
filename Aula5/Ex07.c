#include <stdio.h>
#include <stdlib.h>

/*
Escreva uma função que substitua todos os valores de um vetor por seu respectivo módulo. 
*/

void modulo(int *vet, int tam){
    int i;
    for(i=0;i<tam;i++){
        if(vet[i]<0){
            vet[i]=vet[i] * -1;
        }
    }
}

int main(){
    int vet[5],i;
    puts("Informe os valores do vetor:\n");
    for(i=0;i<5;i++){
        scanf("%d", &vet[i]);
    }
    modulo(vet,i);
    puts("O modeulo do vetor eh\n");
    for(i=0;i<5;i++){
        printf("%d ", vet[i]);
    }

    return 0;
}