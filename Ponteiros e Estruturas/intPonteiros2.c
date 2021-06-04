#include <stdio.h>

struct horario
{
    int horas;
    int minutos;
    int segundos;
};

int main(){

    struct horario agora, *depois;
    depois = &agora;

    depois->horas = 20;
    depois->minutos = 20;
    depois->segundos = 20;

    int somatorio = 100;

    struct horario antes;
    antes.horas = depois->segundos * depois->segundos;
    antes.minutos = somatorio + depois->minutos;
    antes.segundos = depois->minutos + depois->horas;

    printf("%i:%i:%i\n", antes.horas, antes.minutos, antes.segundos);

    return 0;
}