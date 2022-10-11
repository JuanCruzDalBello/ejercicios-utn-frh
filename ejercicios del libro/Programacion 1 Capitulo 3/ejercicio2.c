#include <stdio.h>
#define CANT_INGRESOS 5

int main()
{
    int num;
    int suma_pares = 0;
    int suma_impares = 0;

    // LOOP - INGRESO DE NUMEROS ENTEROS
    for(int i = 0; i < CANT_INGRESOS; i++)
    {
        printf("Ingreso N°%d: ", i+1);
        scanf("%d", &num);

        // COMPROBAR A QUÉ TOTAL SUMAR EL NUMERO INGRESADO
        if(num % 2 == 0)
        {
            suma_pares += num;
        }
        else
        {
            suma_impares += num;
        }
    }

    // MOSTRAR LA SUMA MAS GRANDE
    printf("Suma mayor:\n");
    if(suma_pares > suma_impares)
    {
        printf("\tSuma de pares = %d\n", suma_pares);
    }
    else
    {
        printf("\tSuma de impares = %d\n", suma_impares);
    }

    return 0;
}
