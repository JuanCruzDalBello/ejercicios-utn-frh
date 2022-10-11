#include <stdio.h>

#define N 5

int ORDENADO(int[], int);

int main()
{
    int vector1[] = {1, 2, 3, 4, 5};
    int vector2[] = {7, 2, 3, 4, 5};
    int vector3[] = {1, 2, 5, 4, 5};

    printf("vector1 -> %d\n", ORDENADO(vector1, N));
    printf("vector2 -> %d\n", ORDENADO(vector2, N));
    printf("vector3 -> %d\n", ORDENADO(vector3, N));

    return 0;
}

int ORDENADO(int VEC[], int L)
{
    int i, flag = 1;

    for(i = 0; i < L-1; i++)
    {
        if(VEC[i] > VEC[i+1])
        {
            return 0;
        }
    }

    return 1;
}
