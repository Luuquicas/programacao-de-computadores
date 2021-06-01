#include <stdio.h>
#include <stdlib.h>

/**
 * Leia um vetor de 15 numeros inteiros. Armazene em um segundo vetor a ordenação do primeiro da
 * seguinte forma, ressaltando que 1° indica o menor valor, e 15° o maior valor.
 * */

int ordenaVetor(int v1[],int v2[]){
    int i=0,j=13,k=0;

    while(j>=1){
        v2[i] = v1[j];
        j -= 2;
        i++;
    }
    while(k<=14){
        v2[i] = v1[k];
        k += 2;
        i++;
    }
    return v2;
}

int ordenaCrescente(int v1[]){
    int i,j,temp;

    for(i=0;i<15;i++){
        for(j=i+1;j<15;j++){
            if(v1[i] > v1[j]){
                temp = v1[i];
                v1[i] = v1[j];
                v1[j] = temp;
            }
        }
        
    }
    return v1;

}

int main(){
    int v1[15],v2[15];
    int i;

    //Lendo valores do vetor
    for(i=0;i<15;i++){
        printf("Informe o valor %i\n", i);
        scanf("%i", &v1[i]);
    }
    
    //Função que ordena o vetor em ordem crescente
    ordenaCrescente(v1);
    //Função que ordena o vetor na ordem alternada
    ordenaVetor(v1,v2);

    //Limpa o buffer
    system("cls");

    //Printa na tela o vetor na ordem alternada
    printf("Vetor ordenado:\n");
    for(i=0;i<15;i++){
        printf("%d ", v2[i]);
    }
    return 0;
}