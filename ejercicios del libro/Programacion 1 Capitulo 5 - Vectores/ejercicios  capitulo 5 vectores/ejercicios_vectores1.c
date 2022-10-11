#include <stdio.h>

#define N 5

void impresion_ordenada(int[], int);
void impresion_inversa(int[], int);

int main()
{
    int valores[5], i;

    for(i = 0; i < N; i++)
    {
        printf("valores[%d]: ", i);
        scanf("%d", &valores[i]);
    }

    impresion_ordenada(valores, N);
    impresion_inversa(valores, N);

    return 0;
}

void impresion_ordenada(int val[], int L)
{
    int i;

    for(i = 0; i < L; i++)
    {
        printf("%8d", val[i]);
    }

    printf("\n");
}

void impresion_inversa(int val[], int L)
{
    int i;

    for(i = L-1; i >= 0; i--)
    {
        printf("%8d", val[i]);
    }

    printf("\n");
}
