#include <stdio.h>
#include <stdlib.h>

int main(){
    int dim=0, i=0, j=0, k=0, count=0;
    double fator=0, aux=0;

    printf("Informe a dimensao da matriz: ");
    scanf("%d", &dim);

    double a[dim][dim];

    printf("\n\nEntre com o conteudo da matriz\n\n");
    for(i=0; i<dim; i++){
        for(j=0; j<dim; j++){
            printf("A[%d ; %d] => ", i + 1, j + 1);
            scanf("%lf", &a[i][j]);
        }
    }

    //printa a matriz
    printf("\nMatriz digitada:\n");
    for(i=0; i<dim; i++){
        for(j=0; j<dim; j++){
            printf("%.0f ", a[i][j]);
        }
        putchar('\n');
    }

    //transformando num triângulo
    for(i=0; i<dim-1; i++){
        if(a[i][i] == 0){
            for(k=i; k<dim; k++){
                if(a[k][i] != 0){
                    for(j=0; j<dim; j++){
                        aux = a[i][j];
                        a[i][j] = a[k][j];
                        a[k][j] = aux;
                    }
                    k = dim;
                }
            }
            count++;
        }

        if(a[i][i] != 0){
            for(k=i+1; k<dim; k++){
                fator = -1.0*a[k][i] / a[i][i];
                for(j=i; j<dim; j++){
                    a[k][j] = a[k][j] + (fator*a[i][j]);
                }
            }
        }
    }
    aux = 1.0;
    // Calcula o determinante
    for(i=0; i<dim; i++)
        aux *= a[i][i];

    printf("\nO determinante:\n");
    if(count % 2 == 0)
        printf("%.2lf \n", aux);
    else
        printf("%.2lf \n", -1.0*aux);

    return 0;
}