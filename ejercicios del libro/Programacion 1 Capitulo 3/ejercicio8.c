#include <stdio.h>
#include <stdlib.h>

// DEFINIR LA CANTIDAD DE LANZAMIENTOS
#define LANZAMIENTOS 100000

int main()
{
    int moneda;
    int cont_cara = 0;
    int cont_cruz = 0;

    srand(time(0));

    // LOOP - LANZAMIENTO DE MONEDAS
    for(int i = 0; i < LANZAMIENTOS; i++)
    {
        moneda = rand() % 2;
        // printf("%d\n", moneda);

        // CONTAR CUANTAS VECES SALIO CARA O CRUZ
        if(moneda == 0)
        {
            cont_cara++;
        }
        else
        {
            cont_cruz++;
        }
    }

    // CALCULAR EL PORCENTAJE DE OCURRENCIA DE CARA O CRUZ
    printf("------- Porcentajes de ocurrencia -------\n\n");

    printf("Cara = %f\n", (float)(cont_cara*100) / LANZAMIENTOS);
    printf("Cruz = %f\n", (float)(cont_cruz*100) / LANZAMIENTOS);
}
