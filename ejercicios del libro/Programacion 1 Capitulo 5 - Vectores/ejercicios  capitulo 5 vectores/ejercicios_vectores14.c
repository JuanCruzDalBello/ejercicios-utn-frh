#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define X 8
#define Y 8

void MOSTRAR(int[][8]);
void CARGA(int[][8]);
void CARGA_ALEATORIA(int[][8]);
int MISMA_LINEA(int[][8]);

int main()
{
    int matriz[X][Y];

    CARGA(matriz);
    CARGA_ALEATORIA(matriz);
    MOSTRAR(matriz);
    printf("\n\n");
    printf("%d\n", MISMA_LINEA(matriz));

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

int MISMA_LINEA(int mat[][8])
{
    int i, j;
    int x1 = -1, y1 = -1, x2 = -1, y2 = -1;

    // Encontrar los 1 en la matriz
    for(i = 0; i < 8; i++)
    {
        for(j = 0; j < 8; j++)
        {
            if(mat[i][j] == 1)
            {
                if(x1 == -1)
                {
                    y1 = i;
                    x1 = j;
                }
                else
                {
                    y2 = i;
                    x2 = j;
                }
            }
        }
    }

    // Misma fila
    if(x1 == x2)
    {
        return 1;
    }

    // Misma columna
    if(y1 == y2)
    {
        return 1;
    }

    // Misma diagonal
    if(x1 - y1 == x2 - y2 || x1 + y1 == x2 + y2)
    {
        return 1;
    }

    printf("\n\n%d %d\n%d %d\n\n", x1, y1, x2, y2);

    return 0;
}










