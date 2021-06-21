#include<stdio.h>
#include <stdlib.h>

/*
1- Escreva um programa em C, que através do uso de funções, solicite o total gasto pelo cliente de uma loja, imprime as opções de pagamento, solicita a opção desejada e imprime o valor total das prestações (se houverem).

1) Opção: a vista com 10% de desconto
2) Opção: em duas vezes (preço da etiqueta)
3) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de R$ 100,00).
*/

void aVista(float total){
    float res = total*0.10;
    printf("\nPreco a vista com 10 porcento de desconto: R$%.2f\n", total-res);
}
void duasVezes(float total){
    printf("\nPreco parcelado em 2 vezes de R$%.2f\n", total/2);
}
void acimaCem(float total){
    int op;
    if(total>100){
        printf("Escolha parcelas de 3 ate 10 vezes: ");
        scanf("%d", &op);
    }else{
        printf("Nao se encaixa nesta opcao!!!");
        return;
    }
}

int main(){
    int op;
    float total;
    printf("Informe o preco: ");
    scanf("%f", &total);
    printf("\n\tOPCOES DE PAGAMENTO:\n\t1--- A vista\n\t2--- Em 2x\n\t3--- Parcelamento + juros\n\t0--- Sair\n");
    scanf("%d", &op);
    while(op!=0){
        switch(op){
            case 1:
            aVista(total);
            break;
            case 2:
            duasVezes(total);
            break;
            case 3:
            acimaCem(total);
            break;
            default:
            printf("Opcao invalida!!!");
            break;
        }
        printf("\n\tOPCOES DE PAGAMENTO:\n\t1--- A vista\n\t2--- Em 2x\n\t3--- Parcelamento + juros\n\t0--- Sair\n");
        scanf("%d", &op);
    }

    return 0;
}