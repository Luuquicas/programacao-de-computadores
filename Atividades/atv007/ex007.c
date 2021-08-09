#include <stdio.h>
#include <string.h>

int main(){
    char entrada[100], saida[100], buffer[100], *palavra;
    puts("Informe a entrada:");
    gets(entrada);
    strcpy(saida,"");
    palavra = strtok(entrada," ");
    while(palavra){
        strcpy(buffer, saida);
        strcpy(saida, palavra);
        strcat(saida, " ");
        strcat(saida, buffer);
        palavra = strtok(NULL, " ");
    }
    printf("Saida: %s", saida);
    return 0;
}