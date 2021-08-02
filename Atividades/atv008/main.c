#include <stdio.h>
#include <string.h>
int main() {
 //1- Qual a funcionalidade da linha a seguir? R= Faz a leitura do arquivo 'ex1_arq1.txt'.
 FILE *arq = fopen("ex1_arq1.txt", "r");
 char buffer[120];
 char *token;
 // 2- Qual a funcionalidade da linha a seguir? R= Declara uma string que contém a palavra 'lorem', para ser buscada na string.
 char busca[] = "lorem"; 
 int contagem = 0;
//3- Qual a funcionalidade do laço de repetição a seguir? R= Copia para 'buffer' o conteúdo da variável 'arq', e só pára quando chegar ao final do arquivo.
 while(1) {
 fgets(buffer, 120, arq);
 if(feof(arq)) {
 break;
 }
 // 4- Qual a funcionalidade da linha a seguir? R= Quebrar a string contida em 'buffer' a partir dos tokens " .,!?".
 token = strtok(buffer, " .,!?"); 
 //5- Qual a funcionalidade do laço de repetição a seguir? R= Fazer com que o ponteiro token caminhe pela string, de quebra em quebra.
 while(token != NULL) {
 // se igual cont++
 if(strcmp(token, busca) == 0) {
 contagem++;
 }
 token = strtok(NULL, " .,!?");
 }
 } 
//6- Qual a saída do código? R= Quantas vezes a palavra 'lorem' apareceu no arquivo 'ex1_arq1.txt'.
 printf("ocorrencias de %s: %d\n", busca, contagem);
 fclose(arq);
 return 0;
}