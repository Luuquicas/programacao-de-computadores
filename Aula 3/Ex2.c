#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * Escreva uma função que calcule e retorne a distância entre dois pontos ( x1, y1) e (x2, y2). Todos os números e valores de retorno devem ser do tipo float.
 * */

float distancia(float x1, float y1, float x2, float y2){

    float dist1, dist2, delta, res;
    dist1 = x2 - x1;
    dist2 = y2 - y1;
    delta = (dist1*dist1) + (dist2*dist2);
    res = sqrt(delta);

    return res;

}

int main(){

    float x1,x2,y1,y2,res;
    printf("Informe as coordenadas do ponto 1:\n");
    scanf("%f %f", &x1, &y1);
    printf("Informe as coordenadas do ponto 2:\n");
    scanf("%f %f", &x2, &y2);

    res = distancia(x1,y1,x2,y2);

    printf("A distancia entre os pontos eh %.1f\n", res);

    return 0;
}