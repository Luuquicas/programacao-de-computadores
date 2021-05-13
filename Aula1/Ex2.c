#include <stdio.h>

/*
Faça um algoritmo que leia 3 valores que representam os lados de um triângulo. Verifique se: é um triângulo, caso positivo, classifique o mesmo em equilátero, isósceles ou escaleno. Obs.: para formar um triângulo a soma de dois lados não pode ser menor que o terceiro lado.
*/

int main()
{
    int l1,l2,l3;

    printf("Informe os tres lados do triangulo:\n");
    scanf("%d %d %d", &l1,&l2,&l3);

    if((l1+l2)<l3 || (l1+l3)<l2 || (l2+l3)<l1){
        printf("Nao eh um triangulo");
    }else{
        if((l2==l3) && (l1==l2)){
            printf("O triangulo e equilatero");
        }else if((l1==l2) || (l2==l3) || (l1==l3)){
            printf("O triangulo eh isosceles");
        }else{
            printf("O triangulo eh escaleno");
        }
    }

    return 0;
}