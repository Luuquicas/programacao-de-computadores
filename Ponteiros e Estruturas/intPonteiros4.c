#include <stdio.h>

void testeVariavel(int x){
    x++;
}

void testePonteiro(int *pX){
    *pX++;
}

int main(){
    int teste=1;
    int *pTeste=&teste;

    printf("%d\n", teste); 

    return 0;
}