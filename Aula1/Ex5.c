#include <stdio.h>

/*
Leia um vetor com 15 números inteiros. Armazene em um segundo vetor a ordenação do primeiro da seguinte forma, ressaltando que 1º indica o menor valor e 15º indica o maior valor:

14º 12º 10º 8º 6º 4º 2º 1º 3º 5º 7º 9º 11º 13º 15º
*/

int main(){

int vetor[15];
int i;

for(i=0;i<15;i++){
    scanf("%d", &vetor[i]);
}

for(i=14;i>0;i--){
    if(vetor[i]%2 == 0){
        printf("%d\n", vetor[i]);
    }
}
for(i=0;i<15;i++){
    if(vetor[i]%2 != 0){
        printf("%d\n", vetor[i]);
    }
}

return 0;
}