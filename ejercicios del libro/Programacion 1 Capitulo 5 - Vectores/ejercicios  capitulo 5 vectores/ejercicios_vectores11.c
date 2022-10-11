#include <stdio.h>

#define N 15

int main()
{
    int num_comp;
    int BUCEADORES[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    printf("Nro del competidor que anotó: ");
    scanf("%d", &num_comp);

    while(num_comp > 0)
    {
        BUCEADORES[num_comp-1]++;

        printf("Nro del competidor que anotó: ");
        scanf("%d", &num_comp);
    }

    return 0;
}
