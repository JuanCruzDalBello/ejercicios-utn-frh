#include <stdio.h>

// PROBLEMA: LA VARIABLE sexo TOMA UN SALTO DE LINEA COMO VALOR

int main()
{
    int nota;
    char sexo;
    int ingresos_M = 0;
    int ingresos_F = 0;
    int suma_notas_M = 0;
    int suma_notas_F = 0;
    float promedio_M;
    float promedio_F;

    // INGRESO INICIAL
    printf("Sexo: ");
    scanf("%c", &sexo);

    printf("Nota: ");
    scanf("%d", &nota);

    // LOOP - INGRESO DE DATOS: NOTA Y SEXO (loop -> ingresar "s" para salir)
    while(sexo != 'S')
    {
        // ACTUALIZAR EL CONTADOR Y EL PROMEDIO DEL SEXO CORRESPONDIENTE
        if(sexo == 'M')
        {
            ingresos_M++;
            suma_notas_M += nota;
            promedio_M = (float)suma_notas_M / ingresos_M;
        }

        if(sexo == 'F')
        {
            ingresos_F++;
            suma_notas_F += nota;
            promedio_F = (float)suma_notas_F / ingresos_F;
        }

        printf("\nSexo = %c | Nota = %d\n", sexo, nota);

        // INGRESO DE DATOS
        printf("Sexo: ");
        scanf("%c", &sexo);

        printf("Nota: ");
        scanf("%d", &nota);
    }

    // SWITCH - MOSTRAR EL MAYOR PROMEDIO, HOMBRES O MUJERES
    switch(promedio_M > promedio_F)
    {
        case 1:
            printf("El mejor promedio es el de los VARONES.\n");
            break;

        case 0:
            if(promedio_M == promedio_F)
            {
                printf("Ambos promedios son iguales.\n");
            }
            else
            {
                printf("El mejor promedio es el de las MUJERES.\n");
            }
            break;
    }

    return 0;
}
