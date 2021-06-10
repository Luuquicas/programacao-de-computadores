#include <stdio.h>
#include <stdlib.h>

/**
 * Escreva uma função que receba 3 notas de um aluno e uma letra. Se a letra for A a função retorna * a média aritmética das notas do aluno, se for P, a sua média ponderada (pesos: 5, 3 e 2) e se for * H, a sua média harmônica.
 **/

float aritmetica(float n1, float n2, float n3){
    float n1,n2,n3,res;

    res = (n1+n2+n3)/3;

    return res;
}

float ponderada(float n1, float n2, float n3){
    float n1,n2,n3,res;

    res = ((n1*5)+(n2*3)+(n3*2))/10;

    return res;
}

float harmonica(float n1, float n2, float n3){
    float n1,n2,n3,res;

    res = 3/(1/n1 + 1/n2 + 1/n3);

    return res;
}

int main(){
    float n1,n2,n3,res;
    char op;

    printf("Informe as 3 notas do aluno:\n");
    scanf("%f %f %f", &n1,&n2,&n3);
    printf("Informe a media desejada:\nA--Aritmetica\nP--Ponderada\nH--Harmonica");
    scanf("%c", &op);

    switch(op){
        case 'A':
        printf("A media aritmetica eh %.1f", aritmetica(n1,n2,n3));
        break;

        case 'P':
        printf("A media ponderada eh %.1f", ponderada(n1,n2,n3));
        break;

        case 'H':
        printf("A media harmonica eh %.1f", harmonica(n1,n2,n3));
        break;

        default:
        printf("Opcao invalida!");
        break;
    }

    return 0;
}