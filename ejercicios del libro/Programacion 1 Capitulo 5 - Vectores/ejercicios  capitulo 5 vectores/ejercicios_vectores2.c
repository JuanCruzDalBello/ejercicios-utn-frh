#include <stdio.h>

#define N 7

int divisores(int[], int, int);

int main()
{
    /*
    int valores[N], DIV, i;


    printf("DIV: ");
    scanf("%d", &DIV);

    for(i = 0; i < N; i++)
    {
        printf("valores[%d]: ", i);
        scanf("%d", &valores[i]);
    }
    */

    int valores[] = {2, 4, 5, 7, 9, 10, 3}, DIV = 2, i;


    printf("Cantidad de componentes divisibles por DIV: %d", divisores(valores, DIV, N));

    return 0;
}

int divisores(int val[], int DIV, int L)
{
    int i, cont = 0;

    for(i = 0; i < L; i++)
    {
        if(!(val[i] % DIV))
        {
            cont++;
        }
    }

    return cont;
}
