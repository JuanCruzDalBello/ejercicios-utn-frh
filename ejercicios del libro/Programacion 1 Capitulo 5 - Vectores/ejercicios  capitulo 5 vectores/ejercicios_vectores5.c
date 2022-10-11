#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 1000

int DADO();
void CARGAR_CARAS(int[], int);
void CARGAR_APARICIONES(int[], int[], int);
void MOSTRAR(int[], int);

int main()
{
    int caras[N], i;
    int cant_apariciones[] = {0, 0, 0, 0, 0, 0};

    CARGAR_CARAS(caras, N);
    CARGAR_APARICIONES(caras, cant_apariciones, N);

    printf("Cantidad de apariciones (1-6):\n");
    MOSTRAR(cant_apariciones, 6);

    printf("Porcentajes (1-6):\n");

    for(i = 0; i < 6; i++)
    {
        printf("%8.2f", (float)(cant_apariciones[i] * 100) / N);
    }

    printf("\n");

    return 0;
}

int DADO()
{
    return rand() % 6 + 1;
}

void CARGAR_CARAS(int cara[], int L)
{
    int i;

    srand(time(0));

    for(i = 0; i < L; i++)
    {
        cara[i] = rand() % 6 + 1;
    }
}

void CARGAR_APARICIONES(int cara[], int cant_apar[], int L)
{
    int i;

    for(i = 0; i < L; i++)
    {
        cant_apar[cara[i]-1]++;
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
