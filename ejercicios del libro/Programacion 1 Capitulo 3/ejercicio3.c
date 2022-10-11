#include <stdio.h>

int main()
{
    int num = 0;
    int cont = 0;

    // LOOP - INGRESO INDEFINIDO DE NUMEROS ENTEROS
    while(num != 235)
    {
        printf("Numero: ");
        scanf("%d", &num);

        // CONTAR SI EL NUMERO ES 23
        if(num == 23)
        {
            cont++;
        }

        printf("\n");
    }

    printf("------- Ingreso finalizado -------\n\n");

    printf("El numero 23 aparecio: %d veces.", cont);

    printf("\n");

    return 0;
}
