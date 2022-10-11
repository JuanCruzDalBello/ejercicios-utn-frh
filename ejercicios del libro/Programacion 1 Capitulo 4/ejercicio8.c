#include <stdio.h>

#define MAX_COMPROBACIONES 1500

// FUNCION:
    // RECIBE DOS NUMEROS ENTEROS POSITIVOS

    // SI AMBOS FORMAN UN PAR DE NUMEROS AMIGOS, RETORNAR 1
    // SINO, RETORNAR 0

        // COMPROBAR SI SON UN PAR DE NUMEROS AMIGOS:
            // ITERAR SOBRE TODOS LOS NUMEROS MENORES DE UN NUMERO
            // SUMAR A UN ACUMULADOR LOS DIVISORES EXACTOS

            // HACER LOS MISMOS DOS PASOS PARA EL OTRO NUMERO

            // COMPARAR UN NUMERO CON SU ACUMULADOR CONTRARIO PARA SABER SI SON IGUALES


int par_amigos(int, int);

int main()
{
    /*
    int a, b;

    printf("A y B: ");
    scanf("%d %d", &a, &b);

    printf("%d\n", par_amigos(a, b));
    */

    // AVERIGUAR AL MENOS UN PAR DE NUMEROS AMIGOS
    int a, b;

    for(int i = 2; i < MAX_COMPROBACIONES; i++)
    {
        for(int j = i; j < MAX_COMPROBACIONES; j++)
        {
            if(par_amigos(i, j) == 1)
            {
                printf("PAR AMIGO: %d y %d\n", i, j);
            }
        }
    }

    return 0;
}

int par_amigos(int a, int b)
{
    int acum_div_a = 0;
    int acum_div_b = 0;

    // DOS NUMEROS IGUALES NO PUEDEN SER UN PAR AMIGO
    if(a == b)
    {
        return 0;
    }

    for(int i = 1; i <= a/2; i++)
    {
        if(a % i == 0)
        {
            acum_div_a += i;
        }
    }

    for(int i = 1; i <= b/2; i++)
    {
        if(b % i == 0)
        {
            acum_div_b += i;
        }
    }

    if(acum_div_a == b && acum_div_b == a)
    {
        return 1;
    }

    return 0;
}






