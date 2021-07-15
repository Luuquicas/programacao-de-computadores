#include <stdio.h>
#include <stdlib.h>
//Crie um programa que encontre o maior elemento de um vetor utilizando recursividade

int maiorElemento(int vet[], int tam){
    int vAtual, vAnt;
    if(tam == 1)
        return vet[0];
    vAtual = vet[tam-1];
    vAnt = maiorElemento(vet, tam-1);
    if(vAtual > vAnt)
        return vAtual;
    else    
        return vAnt;
}

int main(){
    int vet[]={5,10,9,13,4},res;
    res = maiorElemento(vet,4);
    printf("Maior elemento :: %d", res);
    return 0;
}