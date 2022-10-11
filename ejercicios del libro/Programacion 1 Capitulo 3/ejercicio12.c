#include <stdio.h>

int main()
{
    int num;
    int resto;

    // INGRESAR UN NUMERO DECIMAL POSITIVO
    printf("Numero decimal: ");
    scanf("%d", &num);

    printf("Equivalente en binario: ");
    printf("\n\t\t\t");

    // LOOP - CALCULAR SU EQUIVALENTE EN BINARIO
    while(num != 0)
    {
        // IR DIVIDIENDO EL NUEMRO A LA MITAD PARA SACAR EL RESTO
        resto = num % 2;
        num = num / 2;

        // IMPRIMIR EL RESTO EN PANTALLA, DE DERECHA A IZQUIERDA
        printf("%d\b\b\b", resto);
    }

    printf("\n\n");

    return 0;
}
