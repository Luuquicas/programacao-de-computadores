#include <stdio.h>
#include <stdlib.h>

/*
Leia uma matriz 3 x 3. Leia também um valor X. O programa deverá fazer uma busca desse valor na matriz e, ao final escrever a localização (linha e coluna) ou uma mensagem de “não encontrado”.
*/

int main(){

    int matriz[3][3],x,num;
    int i,j;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Informe o valor a ser procurado:");
    scanf("%d", &x);

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(matriz[i][j] == x){
                printf("Matriz[%d][%d] = %d", i, j, matriz[i][j]);
                break;
            }
        }
    }
    



return 0;
}