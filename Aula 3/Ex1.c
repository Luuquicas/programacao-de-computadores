#include <stdio.h>
#include <stdlib.h>

/**
 *  Escreva uma função que receba dois números inteiros retorne o menor número1
 * */

int compara(int a, int b){

    if(a>b){
        return b;
    }else{
        return a;
    }

}

int main(){
    int n1,n2,res;

    printf("Informe dois valores:\n");
    scanf("%d %d", &n1, &n2);

    res=compara(n1,n2);

    printf("O menor numero eh %d\n", res);


    return 0;
}