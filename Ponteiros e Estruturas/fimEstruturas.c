#include <stdio.h>

struct horario
{
    int horas;
    int minutos;
    int segundos;
};

void recebeHorario(struct horario lista[5]){
    for(int i=0;i<5;i++){
        printf("Digite o %i horario (hh:mm:ss):\n", i);
        scanf("%i:%i:%i", &lista[i].horas, &lista[i].minutos, &lista[i].segundos);
    }
    
}
void printHorario(struct horario lista[5]){
    for(int i=0;i<5;i++){
        printf("O %i horario eh = %i:%i:%i\n", i, lista[i].horas, lista[i].minutos, lista[i].segundos);
    }
}

int main(){

    struct horario listaHorarios[5];

    recebeHorario(listaHorarios);
    printHorario(listaHorarios);

    return 0;
}