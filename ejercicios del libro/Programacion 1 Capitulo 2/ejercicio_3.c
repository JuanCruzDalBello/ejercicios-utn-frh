#include <stdio.h>

int main()
{
    int diag1, diag2;
    float area;

    printf("Ingresar diagonales del rombo (diag1, diag2): ");
    scanf("%d %d", &diag1, &diag2);

    area = (diag1*diag2) / 2;

    printf("AREA = %.2f\n", area);
}
