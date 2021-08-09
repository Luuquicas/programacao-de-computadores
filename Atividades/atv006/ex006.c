#include <stdio.h>
/**
 * Escreva um programa em C que, através de recursividade, encontre e retorne o maior elemento 
 *de um vetor. Os elementos do vetor deverão ser informados pelo usuário.
 * */
int Retorna_maior(int *v, int tam){
    int valor1, valor2, maior;
    if(tam == 1)
        return v[0];
    valor1 = v[tam-1];
    valor2 = Retorna_maior(v,tam-1);
    return maior = valor1 > valor2 ? valor1 : valor2;
}

int main(){
    int tam, maior;
    puts("Informe o tamanho do vetor: ");
    scanf("%d", &tam);
    int v[tam];
    puts("Informe os elementos do vetor: ");
    for(int i=0; i<tam; i++){
        scanf("%d", &v[i]);
    }
    maior = Retorna_maior(v, tam);
    printf("O maior elemento eh: %d\n", maior);
    return 0;
}