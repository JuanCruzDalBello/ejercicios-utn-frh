#include <stdio.h>
#include <stdlib.h>

#define N 10

void MOSTRAR(int[], char[], float[], int);
void ORDENAR(int[], char[], float[], int);
void MOSTRAR_MAYORES_SUELDOS(int[], char[], float[], int);

int main()
{
    int CUENTA[N] = {458, 321, 744, 228, 349, 201, 198, 705, 789, 227};
    char TIPO[N] = {'B', 'A', 'C', 'C', 'B', 'A', 'C', 'A', 'B', 'C'};
    float SUELDO[N] = {458.32, 105.00, 750.00, 250.00, 633.50, 129.00, 732.40, 900.00, 498.99, 867.66};

    MOSTRAR(CUENTA, TIPO, SUELDO, N);

    printf("\n\n");

    MOSTRAR_MAYORES_SUELDOS(CUENTA, TIPO, SUELDO, N);

    return 0;
}

void MOSTRAR(int cuenta[], char tipo[], float saldo[], int L)
{
    int i;

    printf("\n\t\t    CUENTA  \t    TIPO  \t    SUELDO\n\n");

    for(i = 0; i < L; i++)
    {
        printf("%25d%14c%20.2f\n", cuenta[i], tipo[i], saldo[i]);
    }

}

void ORDENAR(int cuenta[], char tipo[], float sueldo[], int L)
{
    int i, j;

    int aux_INT;
    char aux_CHAR;
    float aux_FLOAT;

    for(i = 0; i < L-1; i++)
    {
        for(j = 0; j < L-i-1; j++)
        {
            if(sueldo[j] > sueldo[j+1])
            {
                // Swapping en los numeros de cuentas
                aux_INT = cuenta[j];
                cuenta[j] = cuenta[j+1];
                cuenta[j+1] = aux_INT;

                // Swapping en los tipos de cuentas
                aux_CHAR = tipo[j];
                tipo[j] = tipo[j+1];
                tipo[j+1] = aux_CHAR;

                // Swapping en los sueldos de las cuentas
                aux_FLOAT = sueldo[j];
                sueldo[j] = sueldo[j+1];
                sueldo[j+1] = aux_FLOAT;
            }
        }
    }
}

void MOSTRAR_MAYORES_SUELDOS(int cuenta[], char tipo[], float saldo[], int L)
{
    int i;

    ORDENAR(cuenta, tipo, saldo, L);

    for(i = 0; i < L; i++)
    {
        if(saldo[i] > 500.00)
        {
            printf("%25d%14c%20.2f\n", cuenta[i], tipo[i], saldo[i]);
        }
    }
}
