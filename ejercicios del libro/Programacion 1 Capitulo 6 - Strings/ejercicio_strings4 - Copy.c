#include <stdio.h>
#include <string.h>

#define MAX 20  // Cant. de caracteres por string
#define NUM 10  // Cant. de strings

/**
ESTE PROGRAMA NO FUNCIONA POR UN PROBLMA EN LA FUNCION ORDENAR, POR UNA MALA INTERPRETACION DEL FUNCIONAMIENTO DE strcmpi. LA VERSION DEL PROGRAMA QUE FUNCIONA ESTA EN EL ARCHIVO ejercicio_strings4.c
**/

/*
PROGRAMA DE BUSQUEDA DE STRINGS
-------------------------------

CREAR UN VECTOR DE STRINGS

ORDENAR EL VECTOR DE STRINGS

ENCONTRAR LA POSICION DE LA PALABRA BUSCADA CON LA FUNCION BUSQUEDA_BINARIA
*/

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

int BUSQUEDA_BINARIA(char[][MAX], int, char[]);
void ORDENAR(char[][MAX], int);
void MOSTRAR(char [][MAX], int);

int main()
{
    char MATRIZ[NUM][MAX] = {"Juan", "Juana", "Pachu", "Pato", "Alejo", "Matias", "Nacho", "Pepe", "Lola", "Laura"};
    char palabra[MAX], AUX[MAX];
    int i, j, POS;

    printf("------- Ingresar %d palabras -------\n", NUM);

    /*
    // Ingreso
    for(i = 0; i<NUM; i++)
    {
        printf("Palabra: ");
        gets(MATRIZ[i]);
    }
    */

    MOSTRAR(MATRIZ, NUM);

    for(i = 0; i < NUM-1; i++)
    {
        for(j = 0; j < NUM-i-1; j++)
        {
            if(strcmpi(MATRIZ[j], MATRIZ[j+1]) == 1)
            {
                strcpy(AUX, MATRIZ[j]);
                strcpy(MATRIZ[j], MATRIZ[j+1]);
                strcpy(MATRIZ[j+1], AUX);
            }
        }
    }

    printf("\n\n");

    MOSTRAR(MATRIZ, NUM);

    printf("Ingresar la palabra a buscar: ");
    gets(palabra);

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

int BUSQUEDA_BINARIA(char MAT[][MAX], int largo, char palabra[])
{
    /* DEVUELVE LA POSICION DEL STRING BUSCADO EN EL VECTOR, O -1 SI EL STRING
    NO SE ENCUENTRA EN EL VECTOR. */
    /*Se uso la funcion strcmpi(), en vez de strcmp(), por lo que a efectos
    del programa da igual escribir la misma palabra con o sin mayusculas.
    Ej: el programa entiende a "Maria" y a "maria" como strings iguales.*/

    int ALTO, MEDIO, BAJO;

    BAJO = 0;
    ALTO = largo - 1;

    // Ordenamiento del vector
    ORDENAR(MAT, largo);

    while(BAJO <= ALTO)
    {
        MEDIO = (BAJO+ALTO) / 2;

        if( strcmpi(MAT[MEDIO], palabra) == 0)
        {
            return MEDIO;
        }

        // Se busca en la mitad inferior
        if( strcmpi(MAT[MEDIO], palabra) == 1 )
        {
            ALTO = MEDIO - 1;
        }
        // Se busca en la mitad superior
        else
        {
            BAJO = MEDIO + 1;
        }
    }

    // No se encontro la palabra buscada en el vector
    return -1;
}

void ORDENAR(char MAT[][MAX], int largo)
{
    /*ORDENA EL VECTOR DE STRINGS DE MENOR A MAYOR.*/
    int i, j;
    char AUX[MAX];

    MOSTRAR(MAT, largo);

    for(i = 0; i < largo-1; i++)
    {
        for(j = 0; j < largo-i-1; j++)
        {
            if(strcmpi(MAT[j], MAT[j+1]) == 1)
            {
                strcpy(AUX, MAT[j]);
                strcpy(MAT[j], MAT[j+1]);
                strcpy(MAT[j+1], AUX);
            }
        }
    }

    printf("\n\n");

    MOSTRAR(MAT, largo);

}

void MOSTRAR(char MAT[][MAX], int largo)
{
    int i;

    for(i = 0; i < largo; i++)
    {
        printf("Vector[%d] = %s\n", i, MAT[i]);
    }
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









