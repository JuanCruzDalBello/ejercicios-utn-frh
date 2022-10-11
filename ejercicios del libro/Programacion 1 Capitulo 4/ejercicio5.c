#include <stdio.h>

// FUNCION:
    // RECIBE 2 NUMEROS ENTEROS (a, b)

    // PASAR POR TODOS LOS NUMEROS ENTRE a Y b
        // SI EL NUMERO ES PRIMO, INCREMENTAR EL CONTADOR (INCLUYENDO a Y b)

    // RETORNAR EL VALOR DEL CONTADOR

int cant_primos(int, int);
int es_primo(int);

int main()
{
    int a, b;

    printf("Ingrese inicio y final (inicio final): ");
    scanf("%d %d", &a, &b);

    printf("Cantidad de primos entre %d y %d: %d\n", a, b, cant_primos(a, b));

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
