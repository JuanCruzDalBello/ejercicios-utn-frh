#include <stdio.h>

#define N 5

void imprimir_vector(int[], int);

int main()
{
    int i;
    int vector1[] = {10, 20, 30, 40, 50};
    int vector2[] = {11, 12, 13, 14, 15};

    printf("Vector 1:\n");
    imprimir_vector(vector1, N);

    printf("\n");

    printf("Vector 2:\n");
    imprimir_vector(vector2, N);

    printf("Vector[10000] = %d\n", vector1[4]);

    return 0;
}

void imprimir_vector(int vec[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("Vector[%d] = %d\n", i, vec[i]);
    }
}
