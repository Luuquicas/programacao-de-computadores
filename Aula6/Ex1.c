#include<stdio.h>
#include<stdlib.h>

/*
Criei um programa, em C, para implementar um sorteio. Nesse jogo, o usuário deverá selecionar a quantidade de números que ele deseja apostar (entre 1 e 20), em seguida, informar os valores escolhidos (entre 0 e 100). Após receber tais valores o programa deverá sortear, aleatoriamente, 20 valores (entre 0 e 100). Após o sorteio, o programa deverá comparar os valores apostados com os sorteados e retornar para o usuário a quantidade de acertos e os números que ele acertou.
O programa deverá implementar as seguintes funções:

void ler_aposta(int *aposta,int n);
void sorteia_valores(int *sorteio,int n);
int compara_aposta(int *aposta, int *sorteio,int *val_certos,int na, int ns);

É obrigatório o uso de alocação dinâmica de memoria.
*/

void lerAposta(int *aposta, int nAp){
    int i;
    printf("Informe os %d valores:\n", nAp);
    for(i=0; i<nAp; i++){
        printf("Valor %d: ", i+1);
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

int comparaValores(int *aposta, int *sorteio, int *valCertos, int nAp, int nSorteio){
    int i, j, n=0;
    for(i=0;i<nAp;i++){
        for(j=0;j<nSorteio;j++){
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
    int nAp, *aposta, sorteio[20], nSort, *valCertos, qntCertos;
    printf("Informe a quantidade de numeros a serem apostados: ");
    scanf("%d", &nAp);

    aposta = malloc(nAp * sizeof(int));
    valCertos = malloc(1 * sizeof(int));

    sorteiaValores(sorteio, 20);
    lerAposta(aposta, nAp);
    qntCertos = comparaValores(aposta, sorteio,valCertos,nAp,20);

    if(qntCertos > 0){
        if(qntCertos == 1){
            printf("Parabens!!! Voce acertou %d numero!!!\n", qntCertos);
        }else{
            printf("Parabens!!! Voce acertou %d numeros!!!\n", qntCertos);
        }
    }else{
        printf("Que pena, voce teve %d acertos :(\n", qntCertos);
    }
    return 0;
}