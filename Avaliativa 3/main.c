#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* move_string(char* buffer, char* palavra1, char* palavra2){
 char* resultado;
	int i, cont = 0;
	int newWlen = strlen(palavra2);
	int oldWlen = strlen(palavra1);

	for (i = 0; buffer[i] != '\0'; i++) {
		if (strstr(&buffer[i], palavra1) == &buffer[i]) {
			cont++;
			i += oldWlen - 1;
		}
	}
	resultado = (char*)malloc(i + cont * (newWlen - oldWlen) + 1);

	i = 0;
	while (*buffer) {
		if (strstr(buffer, palavra1) == buffer) {
			strcpy(&resultado[i], palavra2);
			i += newWlen;
			buffer += oldWlen;
		}
		else
			resultado[i++] = *buffer++;
	}
	resultado[i] = '\0';
	return resultado;
}

int main(){
    FILE *file = fopen("myfile.txt", "r");
    char palavra1[300], palavra2[300], buffer[300];
    char* res = NULL;
    while(1){
        fgets(buffer, 300, file);
        if(feof(file))
            break;
    } puts("Done!");
    fclose(file);

    file = fopen("myfile.txt", "w+");

    puts("Informe a palavra 1:");
    fgets(palavra1, 300, stdin);
    puts("Informe a palavra 2:");
    fgets(palavra2, 300, stdin);

    res = move_string(buffer, palavra1, palavra2);
    fprintf(file, "%s", res);
    fclose(file);
    free(res);
    return 0;
}