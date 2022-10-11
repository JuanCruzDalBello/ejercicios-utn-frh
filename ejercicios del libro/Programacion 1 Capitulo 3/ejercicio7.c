#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    int acum;
    int cont = 0;

    // LOOP - PASAR POR TODOS LOS NUMEROS ENTEROS HASTA ENCONTRAR 5 NUMEROS PERFECTO
    for(num = 1; cont < 5; num++)
    {
        acum = 0;

        // AVERIGUAR SI EL NUMERO ES PERFECTO
        for(int i = 1; i <= num/2; i++)
        {
            // SUMAR TODOS LOS DIVISORES DEL NUMERO
            if(num % i == 0)
            {
                acum += i;
            }
        }

        // SI EL NUMERO ES PERFECTO, MOSTRARLO EN PANTALLA
        if(acum == num)
        {
            printf("%d\n", num);

            // INCREMENTAR UN CONTADOR POR CADA NUMERO PERFECTO ENCONTRADO
            cont++;
        }
    }

    return 0;
}
