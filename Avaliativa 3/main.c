#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
char *muda_string(char *frase, char *antiga, char *nova){
    char *modificada;
    int i, cont = 0;
    int tamanho_nova = strlen(nova);
    int tamanho_antiga = strlen(antiga);
 
    for(i=0; frase[i] != '\0'; i++){
        if(strstr(&frase[i], antiga) == &frase[i]){
            cont++;
            i += tamanho_antiga - 1;
        }
    }
    modificada = (char*)malloc(i + cont*(tamanho_nova - tamanho_antiga));
    if(modificada == NULL)
        exit(EXIT_FAILURE);
    i = 0;
    while(*frase){
        if(strstr(frase, antiga) == frase){
            strcpy(&modificada[i], nova);
            i += tamanho_nova; 
            frase += tamanho_antiga;
        }else
            modificada[i++] = *frase++;
    }
    modificada[i] = '\0';
    return modificada;
}

void ler_arquivo(char *texto){
    FILE *file = fopen("myfile.txt", "r");

    if(file){
        fgets(texto, 300, file);
    }else
        puts("Erro ao abrir arquivo!");
    fclose(file);
}

void escreve_arquivo(char *texto){
    FILE *file = fopen("myfile.txt", "w");

    if(file){
        fprintf(file, "%s", texto);
    }else
        puts("Erro ao abrir arquivo!");
    fclose(file);
}
 
int main(){
    char p1[10], p2[10], frase[150];
    char *resultado = NULL;
    ler_arquivo(frase);
    printf("Informe a palavra a ser buscada:\n");
    scanf(" %s",p1);
    printf("Informe a palavra a ser modificada:\n");
    scanf(" %s",p2);
    resultado = muda_string(frase, p1, p2);
    escreve_arquivo(resultado);
    free(resultado);
    return 0;
}