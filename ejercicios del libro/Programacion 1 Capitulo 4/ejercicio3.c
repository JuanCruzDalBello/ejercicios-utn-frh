#include <stdio.h>

// TOMAR VALORES x E y DEL USUARIO

// FUNCION - CALCULAR Y RETORNAR EL VALOR DE x ELEVADO A y COMO UN unsigned long

unsigned long potencia(int, int);

int main()
{
    int x, y, resultado;

    // TOMAR VALORES x E y DEL USUARIO
    printf("Ingrese dos valores enteros (numero potencia): ");
    scanf("%d %d", &x, &y);

    // FUNCION - CALCULAR Y RETORNAR EL VALOR DE x ELEVADO A y COMO UN unsigned long
    resultado = potencia(x, y);

    printf("Resultado = %lu\n", resultado);

    return 0;
}

unsigned long potencia(int x, int y)
{
    unsigned long resultado = 1;

    if(y == 0){ return resultado; }

    for(int i = 0; i < y; i++)
    {
        resultado = resultado * x;
    }

    return resultado;
}
