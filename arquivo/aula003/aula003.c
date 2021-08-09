#include <stdio.h>

void escrever(char f[]){
    FILE *file = fopen(f, "w");
    char letra;
    if(file){
        puts("Digite um texto e pressione enter ao finalizar: ");
        scanf("%c", &letra);
        while(letra != '\n'){
            fputc(letra, file);
            scanf("%c", &letra);
        }
        fclose(file);
    }else
        puts("Erro ao abrir arquivo!!");
}

void ler(char f[]){
    FILE *file = fopen(f, "r");
    char letra;
    if(file){
        puts("\n\tTexto lido do arquivo:");
        while(!feof(file)){
            letra = fgetc(file);
            printf("%c", letra);
        }
        fclose(file);
    }else
        puts("Erro ao abrir arquivo!!");
}


int main(){
    char nome[] = {"my_file.txt"};

    escrever(nome);
    ler(nome);

    return 0;
}