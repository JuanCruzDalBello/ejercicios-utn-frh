#include <stdio.h>
#include <stdlib.h>

#define N 10

void MOSTRAR_TIPO(int[], char[], float[], int, char);

int main()
{
    int CUENTA[N] = {458, 321, 744, 228, 349, 201, 198, 705, 789, 227};
    char TIPO[N] = {'B', 'A', 'C', 'C', 'B', 'A', 'C', 'A', 'B', 'C'};
    float SALDO[N] = {458.32, 105.00, 750.00, 250.00, 633.50, 129.00, 732.40, 900.00, 498.99, 867.66};

    char C;

    printf("Tipo de cuentas a mostrar: ");
    scanf("%c", &C);

    MOSTRAR_TIPO(CUENTA, TIPO, SALDO, N, C);

    return 0;
}

void MOSTRAR_TIPO(int cuenta[], char tipo[], float saldo[], int L, char c)
{
    int i;

    if(c < 65 || 67 < c)
    {
        printf("Tipo de cuenta inexistente.\n\n");
        return;
    }

    printf("\n\t\t    CUENTA  \t    TIPO  \t    SALDO\n\n");

    for(i = 0; i < L; i++)
    {
        if(tipo[i] == c)
        {
            printf("%25d%14c%20.2f\n", cuenta[i], tipo[i], saldo[i]);
        }
    }

}
