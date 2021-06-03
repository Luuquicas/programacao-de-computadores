#include <stdio.h>

int main(){

    struct horario
    {
        int horas;
        int minutos;
        int segundos;
    };

    struct horario teste[5] = {{10,20,30},{30,55,67},{56,78,32},{4,56,23},{45,78,12}};

    int i=0;

    while(i<5){
        printf("Horario em %i = %i:%i:%i\n", i, teste[i].horas, teste[i].minutos, teste[i].segundos);
        i++;
    }

    return 0;
}