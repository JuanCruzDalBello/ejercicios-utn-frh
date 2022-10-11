#include <stdio.h>

int main()
{
    int num = 0;
    int cont_pares = 0;

    // LOOP - INGRESO DE NUMEROS ENTEROS POSITIVOS
    do
    {
        printf("Numero: ");
        scanf("%d", &num);

        // DETERMINAR SI ES PAR O NO
        if(num % 2 == 0)
        {
            // SI ES PAR, CONTARLO
            cont_pares++;
        }
    }
    while(num >= 0);

    // MOSTRAR EL TOTAL DE NUMEROS PARES
    printf("Total de numeros pares: %d", cont_pares);
}
