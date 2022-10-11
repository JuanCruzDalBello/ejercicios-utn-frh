#include <stdio.h>

#define L 6

int BUSCAR_MINIMO(int[], int);

int main()
{
    int VECTOR[] = {5, 8, 3, 9, 0, 2};

    printf("El valor minimo se encuentra en la posicion: %d\n", BUSCAR_MINIMO(VECTOR, L));
}

int BUSCAR_MINIMO(int VEC[], int largo)
{
    int i, pos_minimo = 0;

    for(i = 1; i < largo; i++)
    {
        if(VEC[i] < VEC[pos_minimo])
        {
            pos_minimo = i;
        }
    }

    return pos_minimo;
}
