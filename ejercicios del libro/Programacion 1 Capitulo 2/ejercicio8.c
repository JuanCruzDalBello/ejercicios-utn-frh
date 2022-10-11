#include <stdio.h>

int main()
{
    // TOMAR EL VALOR DEL CATETO
    int cateto;
    int cont = 0;

    printf("Cateto: ");
    scanf("%d", &cateto);

    // LOOP IMPRIMIR EL TRIANGULO
    while(cont < cateto)
    {
        // LOOP IMPRIMIR ESPACIOS EN BLANCO
        for(int i = 0; i < cateto - (cont+1); i++)
        {
            printf(" ");
        }

        // LOOP IMPRIMIR ASTERISCOS
        for(int i = 0; i < cont+1; i++)
        {
            printf("*");
        }

        printf("\n");

        cont++;
    }

    return 0;
}
