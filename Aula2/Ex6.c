#include <stdio.h>

/*
Escreva uma função que receba um vetor, o tamanho do vetor e um valor n como argumentos e retorne a quantidade de vezes que o valor n aparece no vetor.
*/

int repeticoes(int *vet, int tam, int num){

    int total=0,i;
    for(i=0;i<tam;i++){
        if(num == vet[i]){
            total++;
        }
    }
    return total;

}

int main(){
    int vet[5],n,i,reps;
    printf("Informe os valores do vetor:\n");
    for(i=0;i<5;i++){
        scanf("%d", &vet[i]);
    }
    printf("Informe o valor a ser encontrado:\n");
    scanf("%d", &n);

    reps = repeticoes(vet,i,n);

    printf("O valor %d foi encontrado %d vezes\n",n , reps);

    return 0;
}