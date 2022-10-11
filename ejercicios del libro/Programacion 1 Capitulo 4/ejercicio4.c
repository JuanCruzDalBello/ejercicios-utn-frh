#include <stdio.h>

// FUNCION:
    // RECIBIR UN ENTERO POSITIVO

    // COMPROBAR SI ES ES PRIMO O NO
        // ES PRIMO: RETORNAR 1
        // NO ES PRIMO: RETORNAR 0

int es_primo(int);

int main()
{
    int a;

    while(1)
    {
        printf("Numero: ");
        scanf("%d", &a);

        if(es_primo(a) == 1)
        {
            printf("%d es primo.\n", a);
        }
        else
        {
            printf("%d NO es primo.\n", a);
        }

        printf("\n");
    }

    return 0;
}

int es_primo(int num)
{
    if(num < 2)
    {
        return 0;
    }

    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
