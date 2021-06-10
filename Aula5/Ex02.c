#include <stdio.h>
#include <stdlib.h>

/*
Implemente a função strcmp (char *str1, char *str2) usando ponteiros.
*/

void StrCmp(char *string1, char *string2){
    while(*string1){
        if(*string1 != *string2){
            printf("As strings sao diferentes!");
            return;
        }else{
            string1++;
            string2++;
        }
    }
    if(*string2!='\0'){
        printf("As strings sao diferentes!\n");
        return;
    }
    printf("As strings sao iguais\n");
}

int main(){
    char str1[50], str2[50];
    printf("Informe a primeira string: ");
    gets(str1);
    printf("Informe a segunda string: ");
    gets(str2);
    StrCmp(str1,str2);

    return 0;
}