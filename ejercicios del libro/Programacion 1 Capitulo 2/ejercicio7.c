#include <stdio.h>

int main()
{
    int cont;
    int cateto;

    printf("Cateto: ");
    scanf("%d", &cateto);

    for(int i = 0; i < cateto; i++)
    {
        cont = 0;
        while(cont < i)
        {
            printf("*");
            cont++;
        }

        printf("\n");
    }

    /*
    int i = 1;
    int cont;
    int cateto;

    printf("Cateto: ");
    scanf("%d", &cateto);

    while(i < cateto + 1)
    {
        cont = 0;
        while(cont < i)
        {
            printf("*");
            cont++;
        }

        printf("\n");

        i++;
    }
    */
}
