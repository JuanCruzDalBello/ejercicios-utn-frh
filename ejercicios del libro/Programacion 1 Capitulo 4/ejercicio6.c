#include <stdio.h>

int cant_primos(int, int);
int es_primo(int);

int main()
{
    for(int i = 1000; i <= 3000; i+=1000)
    {
        printf("Cantidad de primos entre %d y %d: ", i, i+1000);
        printf("%d", cant_primos(i, i+1000));
        printf("\n");
    }

    return 0;
}


int cant_primos(int a, int b)
{
    int cont = 0;

    for(int i = a; i <= b; i++)
    {
        if(es_primo(i) == 1)
        {
            cont++;
        }
    }

    return cont;
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
