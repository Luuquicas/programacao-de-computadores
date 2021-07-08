#include <stdio.h>
#include <stdlib.h>

int main( void )
{

    int i = 0, j = 0, k = 0, contador = 0, contador_2 = 0, det = 0;
    int valor = 0, soma_direita = 0, soma_esquerda = 0, ordem = 0;
    int matriz[100][100];

    // Zera matriz, veti e vetj
    for ( i = 0; i < 100; i++ )
    {

        for ( j = 0; j < 100; j++ )
            matriz[i][j] = 0;

    }

    printf( "\n\tCalculo do determinante de uma matriz quadrada de ordem N\n\n");
    printf( "Informe a ordem da matriz:  ");
    scanf("%d", &ordem);


    // Leitura dos valores na matriz
    for ( i = 0; i < ordem; i++ )
    {

          for( j = 0; j < ordem; j++ )
            {

                   printf("Informe o valor [%d][%d]: ", i + 1, j + 1);
                   scanf("%d", &valor);

                   matriz[i][j]=valor;

            }

    }

    // LEITURA DA DIREITA PARA A ESQUERDA
    j = 0;
    k = 0;
    valor = 1;
    contador = 0;
    contador_2 = 0;
    soma_direita = 0;
    // Quantidade total de leituras na matriz
    for ( i = 0; i <= ( ordem * ordem ); i++ )
    {
        // Retorna i para inicio da matriz
        if(j == ordem){
            j = 0;
            contador_2++;
            k = contador_2;
        }
        if(k == ordem)
            k = 0;
        valor = valor * matriz[j][k];
        j++;
        k++;
        contador++;
        if(contador == ordem){
            soma_direita = soma_direita + valor;
            valor = 1;
            contador = 0;
        }
    }

    // LEITURA DA ESQUERDA PARA A DIREITA
    j = 0;
    k = ordem - 1;
    valor = 1;
    contador = 0;
    contador_2 = ordem - 1;
    soma_esquerda = 0;
    // Quantidade total de leituras na matriz
    for ( i = 0; i <= ( ordem * ordem ); i++ )
    {

        // Retorna i para inicio da matriz
        if ( j == ordem )
        {

            j = 0;
            contador_2--;
            k = contador_2;

        }

        if ( k < 0 )
            k = ordem -1 ;

        valor = valor * matriz[j][k];

        j++;
        k--;
        contador++;

        if ( contador == ordem )
        {

            soma_esquerda = soma_esquerda + valor;
            valor = 1;
            contador = 0;

        }


    }

    det = soma_direita + ( soma_esquerda * (-1) );

    printf("\nO Determinante e %d:\n\n", det);

    return 0;

}