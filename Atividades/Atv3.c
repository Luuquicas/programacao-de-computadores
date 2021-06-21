#include<stdio.h>
#include <stdlib.h>

/*
1- Escreva um programa em C, que através do uso de funções, solicite o total gasto pelo cliente de uma loja, imprime as opções de pagamento, solicita a opção desejada e imprime o valor total das prestações (se houverem).

1) Opção: a vista com 10% de desconto
2) Opção: em duas vezes (preço da etiqueta)
3) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de R$ 100,00).
*/

void aVista(float preco){
    float res = preco*0.10;
    printf("\nPreco a vista com 10 porcento de desconto: R$%.2f\n", preco-res);
}
void duasVezes(float preco){
    printf("\nPreco parcelado em 2 vezes de R$%.2f\n", preco/2);
}
void acimaCem(float preco){
    int op;
    if(preco>100){
        printf("Escolha parcelas de 3 ate 10 vezes: ");
        scanf("%d", &op);
        float juros = preco*0.03*(float)op;
        printf("\nPreco parcelado em %d vezes de R$%.2f+juros de 0.03 ao mes, Preco final=R$%.2f\n", op, preco/op, preco+juros);
    }else{
        printf("Nao se encaixa nesta opcao!!!\n");
        return;
    }
}

int main(){
    char ops;
    int op;
    float total=0,preco;

    do{
        total=0;
		printf("Informe os precos:\n");
	    scanf("%f",&preco);
		do{
			total=total+preco;
			scanf("%f",&preco);
		}while(preco != -1);
        printf("\nTotal = R$%.2f\n", total);

        printf("\n\tOPCOES DE PAGAMENTO:\n\t1--- A vista\n\t2--- Em 2x\n\t3--- Parcelamento + juros\n");
        scanf("%d", &op);
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
        printf("Calcular outra compra?\n");
	    scanf("%s",&ops);
    }while(ops == 's');

    return 0;
}