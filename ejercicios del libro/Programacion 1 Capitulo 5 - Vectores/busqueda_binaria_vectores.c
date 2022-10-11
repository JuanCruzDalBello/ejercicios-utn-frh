#include <stdio.h>

#define L 6

int BUSBIN(int[], int, int);

int main()
{
    int VEC[] = {2, 4, 6, 8, 10, 12};
    int VALOR = 4;
    int posicion;

    printf("Valor buscado: %d\n", VALOR);

    posicion = BUSBIN(VEC, L, VALOR);

    if(posicion != -1)
    {
        printf("se encuentra en la posicion: %d\n", posicion);
    }
    else
    {
        printf("no se encuentra en el vector.\n");
    }

    return 0;
}

int BUSBIN(int VECTOR[], int largo, int VALOR)
{
    int BAJO, MEDIO, ALTO;
    BAJO = 0;
    ALTO = largo - 1;

    while(BAJO <= ALTO)
    {
        MEDIO = (BAJO + ALTO)/2;

        if(VECTOR[MEDIO] == VALOR)
        {
            return MEDIO;
        }

        if(VECTOR[MEDIO] > VALOR)
        {
            ALTO = MEDIO - 1;
        }
        else
        {
            BAJO = MEDIO + 1;
        }
    }

    return -1;
}
