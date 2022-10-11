#include <stdio.h>

int main()
{
    float temperatura;

    printf("Temperatura: ");
    scanf("%f", &temperatura);

    printf("Suponiendo temperatura en CELSIUS = %f\n", temperatura);
    printf("\tC -> F = %.2f\n", temperatura*1.8 + 32);
    printf("\tC -> K = %.2f\n", temperatura + 273.15);

    printf("Suponiendo temperatura en FARENHEIT = %f\n", temperatura);
    printf("\tF -> C = %.2f\n", (temperatura-32) / 1.8);
    printf("\tF -> K = %.2f\n", 5/9.0 * (temperatura-32) + 273.15);

    printf("Suponiendo temperatura en KELVIN = %f\n", temperatura);
    printf("\tK -> C = %.2f\n", temperatura - 273.15);
    printf("\tK -> F = %.2f", 1.8 * (temperatura-273.15) + 32);

    printf('\n');

    return 0;
}
