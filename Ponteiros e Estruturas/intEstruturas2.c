#include <stdio.h>

struct horario
    {
        int horas;
        int minutos;
        int segundos;
    };

struct horario teste(struct horario x){

    printf("%i:%i:%i\n", x.horas, x.minutos, x.segundos);

    x.horas = 15;
    x.minutos = 25;
    x.segundos = 47;

    return x;
}

int main(){

    struct horario agora;
    agora.horas = 10;
    agora.minutos = 42;
    agora.segundos = 58;

    struct horario proxima;
    proxima = teste(agora);

    printf("%i:%i:%i\n", proxima.horas, proxima.minutos, proxima.segundos);

    return 0;
}
