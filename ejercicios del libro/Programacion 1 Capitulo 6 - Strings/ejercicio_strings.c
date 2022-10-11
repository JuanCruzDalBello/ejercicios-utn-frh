#include <stdio.h>
#include <string.h>

#define N 10

int main()
{
    char VECTOR[N] = {"Hola"};
    char VECTOR2[N] = {"Chau"};

    printf("%d\n",strcmp("Hola", "Hola"));
    printf("%d\n",strcmp("Hola", "hola"));
    printf("%d\n",strcmp("hola", "Hola"));
    printf("\n\n");
    printf("%d\n", strcmpi("Hola", "hola"));
    printf("\n\n");
    printf("%d\n", strlen("Hola"));
    printf("\n\n");
    puts(VECTOR2);
    strcpy(VECTOR2, VECTOR);
    puts(VECTOR2);

    return 0;
}
