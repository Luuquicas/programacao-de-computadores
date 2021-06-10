#include <stdio.h>
#include <stdlib.h>

/*
Implemente a função strcpy (char *destino, char *origem) usando ponteiros.
*/

void StrCpy(char *copia, char *origem){
    while(*origem){
        *copia=*origem;
        origem++;
        copia++;
    }
    *copia='\0';
}

int main(){
    char str1[50], str2[50];
    printf("Informe a string: ");
    gets(str1);
    StrCpy(str2,str1);
    printf("A string copiada foi: '%s'", str2);

    return 0;
}