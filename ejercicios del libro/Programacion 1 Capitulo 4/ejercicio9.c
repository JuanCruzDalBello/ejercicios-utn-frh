#include <stdio.h>

int main()
{
    char caracter;

    printf("Caracter: ");
    caracter = getchar();

    printf("Caracter ingresado: %c\n", caracter);
    printf("Caracter siguiente: %c\n", caracter + 1);

    return 0;
}
