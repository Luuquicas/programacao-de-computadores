#include <stdio.h>
#include <stdlib.h>
//Sequencia de fibonacci

int fib(int n){
    if(n == 1 || n == 2)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}

int main(){
    int v,res,i;
    printf("informe um termo a ser calculado: ");
    scanf("%d", &v);
    //res = fib(v);
    //printf("%d", res);
    for(i=1;i<=v;i++){
        printf("%d ", fib(i));
    }
    return 0;
}