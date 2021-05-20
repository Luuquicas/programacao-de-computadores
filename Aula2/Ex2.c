#include <stdio.h>
#include <stdlib.h>

/*
Escreva uma função que, recebendo um parâmetro n, retorne o valor de: 1 + 1/2 + 1/3 + ... + 1/n
*/

float funcao(float n)
{
    int i;
    float res;
    res=0;
    for(i=1;i<=n;i++)
    {
      res=res+(float)1/i;
    }
    return res;
}

int main()
{
  float num,res;
  printf("Informe o valor \n");
  scanf("%f",&num);
  res=funcao(num);
  printf("O resultado da operacao eh %.2f",res);

  return 0;
}