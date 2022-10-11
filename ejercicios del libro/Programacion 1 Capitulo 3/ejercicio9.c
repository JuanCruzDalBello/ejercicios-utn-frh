#include <stdio.h>

int main()
{
    int unidad, decena, centena;
    int producto;

    // LOOP - PASAR POR TODOS LOS NUMEROS DE TRES CIFRAS
    for(int num = 100; num < 1000; num++)
    {
        // OBTENER EL VALOR DE CADA CIFRA
        centena = num / 100;
        decena = (num / 10) % 10;
        unidad = num % 10;

        // MULTIPLICAR LAS TRES CIFRAS ENTRE SI
        producto = centena * decena * unidad;


        // SI EL PRODUCTO ES IGUAL AL NUMERO ORIGINAL, IMPRIMIRLO
        if(producto == num)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}
