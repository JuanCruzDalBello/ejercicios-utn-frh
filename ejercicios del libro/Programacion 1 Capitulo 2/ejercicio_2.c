#include <stdio.h>

int main()
{
    int a, b, c;
    float promedio;

    printf("Ingresar 3 valores: ");
    scanf("%d %d %d", &a, &b, &c);

    promedio = (a+b+c)/3.0;

    printf("PROMEDIO = %.2f\n", promedio);
}
