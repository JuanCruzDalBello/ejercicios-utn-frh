#include <stdio.h>

#define N 5

int IGUALES(int[], int[], int);

int main()
{
    int vector1[] = {1, 2, 3, 4, 5};
    int vector2[] = {1, 2, 3, 2, 5};

    printf("%d\n", IGUALES(vector1, vector2, N));

    return 0;
}

int IGUALES(int VEC1[], int VEC2[], int L)
{
    int i;

    for(i = 0; i < L; i++)
    {
        if(VEC1[i] != VEC2[i])
        {
            return 0;
        }
    }

    return 1;
}
