#include <stdio.h>

#define N 5

float PROMEDIO(int[], int);

int main()
{
    int valores[N] = {2, 5, 7, 8, 6};

    printf("%.2f\n", PROMEDIO(valores, N));

    return 0;
}

float PROMEDIO(int val[], int L)
{
    int i, acum = 0;
    float prom;

    for(i = 0; i < L; i++)
    {
        acum += val[i];
    }

    prom = (float)acum / L;

    return prom;
}
