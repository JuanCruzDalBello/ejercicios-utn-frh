#include <stdio.h>
#include <math.h>

#define PI 3.14

int main()
{
    int superfifie;

    printf("Superficie: ");
    scanf("%d", &superfifie);

    printf("Diametro = %.2f\n", sqrt(superfifie / PI));

    return 0;
}
