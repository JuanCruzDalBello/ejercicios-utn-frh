#include <stdio.h>
#include <string.h>

int main()
{
    printf("Hola y Hola  -> %d\n", strcmp("Hola", "Hola"));
    printf("Hola y hola  -> %d\n", strcmp("Hola", "hola"));
    printf("hola y Hola  -> %d\n", strcmp("hola", "Hola"));
    printf("Hola y Holas -> %d\n", strcmp("Hola", "Holas"));
    printf("Holas y Hola -> %d\n", strcmp("Holas", "Hola"));
    printf("Caza y Cazador -> %d\n", strcmp("Caza", "Cazador"));

    return 0;
}
