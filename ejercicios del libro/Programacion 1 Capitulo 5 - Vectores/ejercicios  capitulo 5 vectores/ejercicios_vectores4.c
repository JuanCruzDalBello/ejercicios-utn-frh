#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

void CARGA(int[], int);
void MOSTRAR(int[], int);

int main()
{
    int vector[N];

    CARGA(vector, N);
    MOSTRAR(vector, N);

    return 0;
}

void CARGA(int vec[], int L)
{
    int i;

    srand(time(0));

    for(i = 0; i < L; i++)
    {
        vec[i] = rand() % 100;
    }
}

void MOSTRAR(int vec[], int L)
{
    int i;

    for(i = 0; i < L; i++)
    {
        printf("%8d", vec[i]);
    }

    printf("\n");
}
