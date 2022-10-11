#include <stdio.h>
#include <math.h>

int main()
{
    int num_binario;
    int acum = 0;

    // INGRESAR UN NUMERO BINARIO
    printf("Ingrese un numero binario: ");
    scanf("%d", &num_binario);

    // LOOP - AVERIAGUAR EL VALOR DEL NUMERO EN DECIMAL
    for(int i = 0; num_binario != 0; i++)
    {
        // SUMAR AL ACUMULADOR EL VALOR DE LAS COLUMNAS CON VALOR 1
        acum += num_binario % 10 * pow(2, i);

        // SACAR EL ULTIMO DIJITO DEL NUMERO BINARIO
        num_binario = num_binario / 10;

    }

    // MOSTRAR EL ACUMULADOR COMO EQUIVALENTE EN DECIMAL
    printf("Equivalente en decimal: %d\n", acum);

    return 0;
}
