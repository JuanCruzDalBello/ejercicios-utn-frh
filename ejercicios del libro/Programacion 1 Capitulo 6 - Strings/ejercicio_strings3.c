#include <stdio.h>
#include <string.h>

int main()
{
    int I;
    char VEC[2][5];

    for(I=0;I<2; I++)
        gets(VEC[I]);

    printf("\n\n\n");

    for(I=0;I<2; I++)
        puts(VEC[I]);

    return 0;
}

/*
Al ser CARLOS y MAGNO palabras de 5 caracteres, no queda espacio en los strings para el caracter nulo. Como no hay un caracter que defina el final del string, la funcion gets() nunca termina de ejecutarse.
*/
