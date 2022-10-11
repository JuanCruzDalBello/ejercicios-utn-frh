#include <stdio.h>
#include <string.h>

#define NUM 10
#define LETRAS 20

int BUSQUEDA(float[], int);
void ORDENAR(float[], char[][LETRAS], int);
void MOSTRAR(float[], char[][LETRAS], int);

int main()
{
    /*
    char NOMBRES[NUM][LETRAS];
    int PROMEDIOS[NUM];
    */

    /*
    for(i = 0; i < NUM; i++)
    {
        printf("----- Alumno %d -----\n", i);
        printf("Nombre: ");
        gets(NOMBRES[i]);
        printf("Promedio: ");
        scanf("%f", &PROMEDIOS[i]);
    }
    */

    // Carga ya hecha para facilitar el testeo
    char NOMBRES[NUM][LETRAS] = {"Juan", "Ana", "Ciro", "Patricia", "Leandro", "Manuel", "Mario", "Luigi", "Manolo", "Laura"};
    float PROMEDIOS[NUM] = {9.2, 10.0, 7.5, 3.1, 6.9, 2.7, 8.6, 5.8, 1.5, 3.14};
    int POS;

    // Busqueda
    POS = BUSQUEDA(PROMEDIOS, NUM);

    printf("----- Mejor promedio ----\n");
    printf("Alumno: %s\n", NOMBRES[POS]);
    printf("Promedio: %.1f\n", PROMEDIOS[POS]);

    POS = -1;

    // Busqueda ordenada
    ORDENAR(PROMEDIOS, NOMBRES, NUM);
    POS = NUM-1;
    printf("Mejor promedio:\n");
    printf("Alumno: %s\n", NOMBRES[POS]);
    printf("Promedio: %.1f\n", PROMEDIOS[POS]);
}

int BUSQUEDA(float PROM[], int num)
{
    // Al ser una busqueda secuencial no hace falta ordenar los vectores.
    int i, POS = 0;

    for(i = 1; i < num; i++)
    {
        if(PROM[POS] < PROM[i])
        {
            POS = i;
        }
    }

    return POS;
}

void ORDENAR(float PROM[], char NOM[][LETRAS], int num)
{
    /*ORDENA LOS VECTORES POR PROMEDIO, DE MENOR A MAYOR*/
    int i, j;
    float PROM_AUX;
    char NOM_AUX[LETRAS];

    for(i = 0; i < num-1; i++)
    {
        for(j = 0; j < num-i-1; j++)
        {
            if(PROM[j] > PROM[j+1])
            {
                // Swapping de promedios
                PROM_AUX  = PROM[j];
                PROM[j]   = PROM[j+1];
                PROM[j+1] = PROM_AUX;

                // Swapping de nombres
                strcpy(NOM_AUX,  NOM[j]);
                strcpy(NOM[j],   NOM[j+1]);
                strcpy(NOM[j+1], NOM_AUX);
            }
        }
    }

    return;
}

void MOSTRAR(float PROM[], char NOM[][LETRAS], int num)
{
    int i;

    for(i = 0; i < num; i++)
    {
        printf("%12s %.1f\n", NOM[i], PROM[i]);
    }

    return;
}






















