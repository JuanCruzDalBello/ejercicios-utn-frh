#include <stdio.h>

#define N 3

int main()
{
    int vector[N], i;

    // Ingreso de datos al vector
    vector[0] = 10;
    vector[1] = 20;
    vector[2] = 30;


    // Impresion de datos del vector
    for(i = 0; i < N; i++)
    {
        printf("Vector[%d] = %d\n", i, vector[i]);
    }

    printf("sizeof(vector) = %d\n", sizeof(vector));

    // Longitud del vector
    printf("Longitud del vector = %d\n", sizeof(vector) / sizeof(vector[0]));
}

/*
int main()
{
    int vector[N], i;

    // Ingreso de datos al vector
    vector[0] = 10;
    vector[1] = 20;
    vector[2] = 30;


    // Impresion de datos del vector
    for(i = 0; i < N; i++)
    {
        printf("Vector[%d] = %d\n", i, vector[i]);
    }

    // Direcciones de memoria
    for(i = 0; i < N; i++)
    {
        // printf("&vector[%d] = %d\n", i, vector + sizeof(int) * i);
        printf("&vector[%d] = %d\n", i, (int)vector + sizeof(int) * i);
        printf("%d\n", sizeof(int));
    }

    printf("\n");

    for(i = 0; i < N; i++)
    {
        printf("&vector[%d] = %d\n", i, &vector[i]);
    }

    printf("vector --> %p\n", vector);
    printf("%d\n", sizeof(int) * 0);
    printf("%d\n", sizeof(int) * 1);
    printf("%d\n", sizeof(int) * 2);

    return 0;
}
*/

/*
int main()
{
    int vector[N], i;

    for(i = 0; i < N; i++)
    {
        vector[i] = i * 10;
    }

    for(i = 0; i < N; i++)
    {
        printf("Vector[%d] = %d\n", i, vector[i]);
    }

    return 0;
}
*/
