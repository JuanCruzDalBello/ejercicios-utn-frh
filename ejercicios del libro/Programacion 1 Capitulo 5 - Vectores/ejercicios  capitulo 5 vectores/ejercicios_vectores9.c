#include <stdio.h>
#include <stdlib.h>

#define N 10

int MAYOR_SALDO(float[], int);
void MOSTRAR_MAYOR_SALDO(int[], char[], float[], int);

int main()
{
    int CUENTA[N] = {458, 321, 744, 228, 349, 201, 198, 705, 789, 227};
    char TIPO[N] = {'B', 'A', 'C', 'C', 'B', 'A', 'C', 'A', 'B', 'C'};
    float SALDO[N] = {458.32, 105.00, 750.00, 250.00, 633.50, 129.00, 732.40, 900.00, 498.99, 867.66};

    MOSTRAR_MAYOR_SALDO(CUENTA, TIPO, SALDO, N);

    return 0;
}

int MAYOR_SALDO(float saldo[], int L)
{
    int i, pos = 0;

    for(i = 1; i < L; i++)
    {
        if(saldo[i] > saldo[pos])
        {
            pos = i;
        }
    }

    return pos;
}

void MOSTRAR_MAYOR_SALDO(int cuenta[], char tipo[], float saldo[], int L)
{
    int i, pos = MAYOR_SALDO(saldo, L);

    printf("Cuenta con mayor sueldo: ");
    printf("\n\t\t    CUENTA  \t    TIPO  \t    SALDO\n\n");
    printf("%25d%14c%20.2f\n", cuenta[pos], tipo[pos], saldo[pos]);
}
