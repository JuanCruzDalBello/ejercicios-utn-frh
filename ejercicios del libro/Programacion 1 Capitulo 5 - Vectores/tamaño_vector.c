#include <stdio.h>

#define N 5

void funcion(int[]);

int main()
{
    int i;
    int vector1[] = {10, 20, 30, 40, 50};

    printf("Tama�o de vector1 = %d\n", sizeof(vector1));
    funcion(vector1);

    return 0;
}

void funcion(int VEC[])
{
    printf("Tama�o de VEC = %d\n", sizeof(VEC));
}
