#include <stdio.h>

int main(){

    struct horario
    {
        int horas;
        int minutos;
        int segundos;
        double teste;
    };

    struct horario agora;
    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 30;

    struct horario depois;
    depois.horas = agora.horas + 10;
    depois.minutos = agora.minutos + 15;
    depois.segundos = agora.segundos + 25;

    printf("Horario = %i:%i:%i\n", agora.horas , agora.minutos , agora.segundos);
    
    return 0;
}