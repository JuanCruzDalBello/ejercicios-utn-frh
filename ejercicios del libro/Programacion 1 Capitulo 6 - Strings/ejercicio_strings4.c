#include <stdio.h>
#include <string.h>

#define MAX 20  // Cant. de caracteres por string
#define NUM 10  // Cant. de strings

/*
PROGRAMA DE BUSQUEDA DE STRINGS
-------------------------------

CREAR UN VECTOR DE STRINGS

ORDENAR EL VECTOR DE STRINGS

ENCONTRAR LA POSICION DE LA PALABRA BUSCADA CON LA FUNCION BUSQUEDA_BINARIA
*/

void MOSTRAR(char[][MAX], int);
void ORDENAR(char[][MAX], int);
int BUSQUEDA_BINARIA(char[][MAX], int, char[]);

int main()
{
    // char MATRIZ[NUM][MAX] = {"Juan", "Juana", "Pachu", "Pato", "Alejo", "Matias", "Nacho", "Pepe", "Lola", "Laura"};
    char MATRIZ[NUM][MAX];
    char palabra[MAX];
    int i, POS;

    /*
    MOSTRAR(MATRIZ, NUM);

    ORDENAR(MATRIZ, NUM);

    printf("\n\n");

    MOSTRAR(MATRIZ, NUM);
    */

    printf("------- Ingresar %d palabras -------\n", NUM);

    // Ingreso
    for(i = 0; i<NUM; i++)
    {
        printf("Palabra: ");
        gets(MATRIZ[i]);
    }

    printf("Ingresar la palabra a buscar: ");
    gets(palabra);

    printf("\n");

    // Ordenamiento del vector para realizar la busqueda binaria
    printf("Nombres ordenados:\n");
    ORDENAR(MATRIZ, NUM);
    MOSTRAR(MATRIZ, NUM);

    // Busqueda
    POS = BUSQUEDA_BINARIA(MATRIZ, NUM, palabra);

    printf("\n\n\n");

    if(POS != -1)
    {
        printf("'%s' se encuentra en la posicion %d.\n", palabra, POS);
    }
    else
    {
        printf("'%s' no se encuentra en el vector de strings.\n", palabra);
    }

    return 0;
}

void MOSTRAR(char MAT[][MAX], int largo)
{
    int i;

    for(i = 0; i < largo; i++)
    {
        printf("VECTOR[%d] = %s\n", i, MAT[i]);
    }
}

void ORDENAR(char MAT[][MAX], int largo)
{
    int i, j;
    char AUX[MAX];

    for(i = 0; i < largo-1; i++)
    {
        for(j = 0; j < largo-i-1; j++)
        {
            if(strcmp( MAT[j], MAT[j+1] ) > 0)
            {
                strcpy(AUX,      MAT[j]   );
                strcpy(MAT[j],   MAT[j+1] );
                strcpy(MAT[j+1], AUX      );
            }
        }
    }
}

int BUSQUEDA_BINARIA(char MAT[][MAX], int largo, char palabra[])
{
    /*RETORNA LA POSICION DEL STRING BUSCADO EN EL VECTOR DE STRINGS,
    O -1 SI NO SE ENCUENTRA EN ESTE.*/

    int ALTO, MEDIO, BAJO;

    BAJO = 0;
    ALTO = largo - 1;

    // ORDENAR(MAT, largo);

    while(BAJO <= ALTO)
    {
        MEDIO = (BAJO + ALTO) / 2;

        if( strcmp(MAT[MEDIO], palabra) == 0)
        {
            return MEDIO;
        }

        if( strcmp(MAT[MEDIO], palabra) > 0 )
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

/*

FUNCION BUSQUEDA_BINARIA(vector de strings, largo, string buscada):
    SE DEFINEN EL LIMITE SUPERIOR E INFERIOR.

    SE ORDENA EL VECTOR DE STRINGS. ( FUNCION ORDENAR() )

    MIENTRAS EL LIMITE INFERIOR SEA MENOR O IGUAL AL SUPERIOR:
        SE DEFINE EL VALOR DE 'MEDIO'.

        SI EL STRING EN EL MEDIO DEL VECTOR ES EL STRING BUSCADO,
        SE RETORNA ESA POSICION Y TERMINA LA FUNCION.

        SI EL VALOR DEL STRING DEL MEDIO ES MAYOR AL DEL STRING BUSCADO:
            'MEDIO' TOMA EL VALOR DEL LIMITE SUPERIOR.

        SINO:
            'MEDIO' TOMA EL VALOR DEL LIMITE INFERIOR.


    SI LA FUNCION PASA DEL BUCLE, SIGNIFICA QUE NO SE ENCONTRÓ LA
    PALABRA DENTRO DEL VECTOR, SE RETORNA -1.

*/





