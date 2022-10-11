#include <stdio.h>

// FUNCION:
    // RECIBE 1 NUMERO ENTERO POSITIVO

    // COMPROBAR SI ES UN NUMERO PERFECTO:
        // SI ES PERFECTO, RETORNAR 1
        // SI NO ES PERFECTO, RETORNAR 0

int es_perfecto(int);

int main()
{
    int num;

    printf("Numero: ");
    scanf("%d", &num);

    printf("%d\n", es_perfecto(num));

    return 0;
}

int es_perfecto(int x)
{
    int acum_divisores = 0;

    for(int i = 1; i <= x/2; i++)
    {
        if(x % i == 0)
        {
            acum_divisores += i;
        }
    }

    if(acum_divisores == x)
    {
        return 1;
    }

    return 0;
}















