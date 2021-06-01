#include <stdio.h>

/*
Leia um vetor com 15 números inteiros. Armazene em um segundo vetor a ordenação do primeiro da seguinte forma, ressaltando que 1º indica o menor valor e 15º indica o maior valor:

14º 12º 10º 8º 6º 4º 2º 1º 3º 5º 7º 9º 11º 13º 15º
*/

int main(){

int v1[15],v2[15];
int i,j=13,k=0,l=0;

for(i=0;i<15;i++){
    scanf("%d", &v1[i]);
}


for(i=14;i>0;i--){
    if(v1[i]%2 == 0){
        printf("%d\n", v1[i]);
    }
}
for(i=0;i<15;i++){
    if(v1[i]%2 != 0){
        printf("%d\n", v1[i]);
    }
}

while(j>=1){
    v2[i]=v1[j];
    j=j-2;
    i++;
}
while(k<=14){
    v2[i]=v1[k];
    k=k+2;
    i++;
}
for(i=0;i<15;i++){
    printf("V2[%d] = %d\n", i, v2[i]);
}
    

return 0;
}