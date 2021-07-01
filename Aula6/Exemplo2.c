#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, *p, dim;
    printf("informe o tamanho do vetor: ");
    scanf("%d", &dim);
    p = malloc(dim * sizeof(int));
    printf("Informe os valores: ");
    for (i = 0; i < dim; i++)
    {
        scanf("%d", &p[i]);
    }
    printf("Os valores informados: ");
    for (i = 0; i < dim; i++)
    {
        printf("%d ", p[i]);
    }
    
    //Realocar memoria
    p = realloc(p,3*sizeof(int));
    printf("\nOs valores realocados sao: ");
    for(i=0;i<3;i++)
    {
        printf("%d ", p[i]);
    }
    free(p);
    return 0;
}