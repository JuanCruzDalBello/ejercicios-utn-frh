#include <stdio.h>

int main()
{
    int num;
    int acum = 0;

    // INGRESO DE UN NUMERO
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    // LOOP - CORROBORAR TODOS LOS POSIBLES DIVISORES
    // SOLO ES NECESARIO COMPROBAR HASTA LA MITAD DEL NUMERO INGRESADO
    for(int i = 1; i <= num/2; i++)
    {
        // SI SE ENCUENTRA UN DIVISOR, SE SUMA AL ACUMULADOR
        if(num % i == 0)
        {
            acum += i;
        }
    }

    // DETERMINAR SI EL NUMERO INGRESADO ES O NO UN NUMERO PERFECTO
    if(acum == num)
    {
        printf("%d es un numero perfecto.\n", num);
    }
    else
    {
        printf("%d NO es un numero perfecto.\n", num);
    }

    return 0;
}
