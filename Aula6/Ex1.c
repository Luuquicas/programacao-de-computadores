#include<stdio.h>
#include<stdlib.h>
//#include<time.h>

void lerAposta(int *aposta, int nAp){
    int i;
    printf("Informe os %d valores: ", nAp);
    for(i=0;i<nAp;i++){
        scanf("%d", &aposta[i]);
    }
}

void sorteiaValores(int *sorteio, int tam){
    int i;
    srand(time(NULL));
    for(i=0;i<tam;i++){
        sorteio[i] = rand() % 100;
    }
}

int comparaValores(int *aposta, int *sorteio, int *valCertos, int nAp, int nSort){
    int i, j, n=0;
    for(i=0;i<nAp;i++){
        for(j=0;j<nSort;j++){
            if(aposta[i] == sorteio[j]){
                if(n == 0){
                valCertos[n] = aposta[i];
                n++; 
                }else{
                    valCertos = realloc(valCertos,(n+1) * sizeof(int));
                    valCertos[n] = aposta[i];
                    n++;
                }
            }
        }
    }
    return n;
}

int main(){
    int nAp, *aposta, sorteio[20],nSort,valCertos, qntCertos;

    printf("Informe a quantidade de numeros a serem apostados: ");
    scanf("%d", &nAp);
    aposta = malloc(nAp * sizeof(int));
    valCertos = malloc(1 * sizeof(int));

    lerAposta(aposta, nAp);

    return 0;
}