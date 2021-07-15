#include <stdio.h>
#include <stdlib.h>

float fatorial(int n){
    float fat;
    if(n<=1){
        return 1;
    }else{
        fat = n*fatorial(n-1);
        return fat;
    }
}

int main(){
    int num;
    float res;
    printf("Informe um valor: ");
    scanf("%d", &num);
    res = fatorial(num);
    printf("O fatorial de %d eh %.0f\n", num, res);
}