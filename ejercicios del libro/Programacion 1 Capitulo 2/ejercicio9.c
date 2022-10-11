#include <stdio.h>

int main()
{
    float factura, descuento, precio_final;

    // INGRESAR FACTURA
    printf("Ingresar factura: ");
    scanf("%f", &factura);

    printf("\n");

    // INGRESAR PORCENTAJE
    printf("Ingresar descuento: ");
    scanf("%f", &descuento);

    printf("\n");

    // CALCULAR PRECIO FINAL
    precio_final = factura - ((factura * descuento) / 100);

    // MOSTRAR PRECIO FINAL
    printf("Precio final = %f", precio_final);

    printf("\n");

    return 0;
}
