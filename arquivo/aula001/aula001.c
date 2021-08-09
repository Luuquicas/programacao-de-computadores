#include <stdio.h>

int main(){
    FILE *file;
    char letra;

    file = fopen("my_file.txt", "w");

    if(file){
        printf("Digite um texto e pressione enter ao finalizar:");
        scanf("%c", &letra);
        while(letra!= '\n'){
            fputc(letra, file);
            scanf("%c", &letra);
        }
        fclose(file);
    }else
        puts("Erro ao abrir arquivo!!!");

    return 0;
}