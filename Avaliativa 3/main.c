#include <stdio.h>
#include <string.h>

int main(){
    FILE *file = fopen("my_file.txt", "r");
    char palavra1[20], palavra2[20], buffer[300];

    while(1){
        fgets(buffer, 300, file);
        if(feof(file))
            break;
    }

    puts("Informe a palavra 1:");
    fgets(palavra1, 20, stdin);
    puts("Informe a palavra 2: ");
    fgets(palavra2, 20, stdin);
    return 0;
}