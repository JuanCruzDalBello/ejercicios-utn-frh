#include <stdio.h>

float const PI = 3.14;

int main()
{
    float radio;
    float longitud;
    float superficie;

    printf("Ingresar el radio: ");
    scanf("%f", &radio);

    // Calculo de la longitud
    longitud = 2 * PI * radio;
    printf("LONGITUD = %.2f\n", longitud);

    // Calculo de la superficie
    superficie = PI * (radio * radio);
    printf("SUPERFICIE = %.2f\n", superficie);
}
