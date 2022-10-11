#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define X 8
#define Y 8

void MOSTRAR(int[][8]);
void CARGA(int[][8]);
void CARGA_ALEATORIA(int[][8]);

int main()
{
    int matriz[X][Y];

    CARGA(matriz);
    MOSTRAR(matriz);

    printf("\n\n\n");

    CARGA_ALEATORIA(matriz);
    MOSTRAR(matriz);

    return 0;
}

void MOSTRAR(int mat[][8])
{
    int i, j;

    for(i = 0; i < 8; i++)
    {
        for(j = 0; j < 8; j++)
        {
            printf("%8d", mat[i][j]);
        }

        printf("\n\n");
    }
}

void CARGA(int mat[][8])
{
    int i, j;

    for(i = 0; i < 8; i++)
    {
        for(j = 0; j < 8; j++)
        {
            mat[i][j] = 0;
        }
    }
}

void CARGA_ALEATORIA(int mat[][8])
{
    int i, x_rand, y_rand;

    srand(time(0));

    for(i = 0; i < 2; i++)
    {
        // Posicion aleatoria
        x_rand = rand() % 8;
        y_rand = rand() % 8;

        if(mat[x_rand][y_rand] != 1)
        {
            mat[x_rand][y_rand] = 1;
        }
    }
}
