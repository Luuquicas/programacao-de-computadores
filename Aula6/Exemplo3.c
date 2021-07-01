#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, linha, coluna, **m;
    printf("Informe a quantidade de linhas e colunas da matriz: ");
    scanf("%d %d", &linha, &coluna);

    //Alocar dinamicamente a primeira dimensao
    m = (int **)malloc(linha * sizeof(int *));

    //Alocar dinamicamente a segunda dimensao
    for (i = 0; i < linha; i++){
        m[i] = (int *)malloc(coluna * sizeof(int));
    }

    printf("informe os valores da matriz: ");
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            scanf("%d", m[i][j]);
        }
    }

    printf("Matriz: \n");
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    //Liberar memoria
    for(i=0;i<linha;i++){
        free(m[i]);
    }
    free(m);

    return 0;
}