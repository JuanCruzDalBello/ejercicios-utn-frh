#include <stdio.h>
#include <string.h>

int strcmp_es(char[], char[]);

int main()
{
    printf("----------------- Pruebas con la funcion strcmp() estandar -----------------\n\n");

    printf("Hola y Hola  -> %d\n",   strcmp("Hola", "Hola"));
    printf("Hola y hola  -> %d\n",   strcmp("Hola", "hola"));
    printf("hola y Hola  -> %d\n",   strcmp("hola", "Hola"));
    printf("Hola y Holas -> %d\n",   strcmp("Hola", "Holas"));
    printf("Holas y Hola -> %d\n",   strcmp("Holas", "Hola"));
    printf("Caza y Cazador -> %d\n", strcmp("Caza", "Cazador"));

    printf("----------------- Pruebas con la funcion strcmp_es() -----------------\n\n");

    printf("Hola y Hola  -> %d\n",   strcmp_es("Hola", "Hola"));
    printf("Hola y hola  -> %d\n",   strcmp_es("Hola", "hola"));
    printf("hola y Hola  -> %d\n",   strcmp_es("hola", "Hola"));
    printf("Hola y Holas -> %d\n",   strcmp_es("Hola", "Holas"));
    printf("Holas y Hola -> %d\n",   strcmp_es("Holas", "Hola"));
    printf("Caza y Cazador -> %d\n", strcmp_es("Caza", "Cazador"));

    return 0;
}
/*

FUNCION strcmp_es:
PROTOTIPO: strcmp_es(char STR1[], char STR2[])
    COPIAR AMBOS STRINGS A DOS ADICIONALES PARA MODIFICAR ESTOS ULTIMOS SIN ALTERAR LOS ORIGINALES

    PASAR POR TODOS LOS CARACTERES DE LOS STRINGS:
        CAMBIAR EL VALOR DE LOS CARACTERES:
            SI EL VALOR DEL CARACTER ESTA ENTRE 79 Y 90 (O-Z) O ENTRE 111 Y 122 (o-z):
                    CARACTER = CARACTER + 1
            SI EL VALOR DEL CARACTER ES 164:
                CARACTER TOMA EL VALOR 111 (HIPOTETICO VALOR DE ñ)

            SI EL VALOR DEL CARACTER ES 165:
                CARACTER TOMA EL VALOR 79 (HIPOTETICO VALOR DE Ñ)

    COMPARAR LOS STRINGS ADICIONALES YA MODIFICADOS Y RETORNAR EL VALOR CORRESPONDIENTE

*/

int strcmp_es(char STR1[], char STR2[])
{
    int i, largo_str1, largo_str2;

    // STRINGS ADICIONALES PARA MODIFICARLOS SIN TOCAR LOS ORIGINALES
    char STR1_AUX[strlen(STR1)], STR2_AUX[strlen(STR2)];
    strcpy(STR1_AUX, STR1);
    strcpy(STR2_AUX, STR2);

    largo_str1 = strlen(STR1_AUX);
    largo_str2 = strlen(STR2_AUX);

    // PASAR POR TODOS LOS CARACTERES DEL PRIMER STRING
    for(i = 0; i < largo_str1; i++)
    {
        // EL VALOR DEL CARACTER ESTA ENTRE 79 Y 90 (O-Z) O ENTRE 111 Y 122 (o-z):
        if((79 <= STR1_AUX[i] && STR1_AUX[i] <= 90) || (111 <= STR1_AUX[i] && STR1_AUX[i] <= 122))
        {
            STR1_AUX[i]++;
        }

        // EL CARACTER VALE 164 (ñ)
        if(STR1_AUX[i] == 164)
        {
            // VALOR HIPOTETICO DE ñ EN LA TABLA ASCII
            STR1_AUX[i] = 111;
        }

        // EL CARACTER VALE 165 (Ñ)
        if(STR1_AUX[i] == 165)
        {
            // VALOR HIPOTETICO DE Ñ EN LA TABLA ASCII
            STR1_AUX[i] = 79;
        }
    }

    // PASAR POR TODOS LOS CARACTERES DEL SEGUNDO STRING:
    for(i = 0; i < largo_str2; i++)
    {
        // SI EL VALOR DEL CARACTER ESTA ENTRE 79 Y 90 (O-Z) O ENTRE 111 Y 122 (o-z):
        if((79 <= STR2_AUX[i] && STR2_AUX[i] <= 90) || (111 <= STR2_AUX[i] && STR2_AUX[i] <= 122))
        {
            STR2_AUX[i]++;
        }

        // SI EL VALOR DEL CARACTER ES 164 (ñ)
        if(STR2_AUX[i] == 164)
        {
            // VALOR HIPOTETICO DE ñ EN LA TABLA ASCII
            STR2_AUX[i] = 111;
        }

        // SI EL VALOR DEL CARACTER ES 165 (Ñ)
        if(STR2_AUX[i] == 165)
        {
            // VALOR HIPOTETICO DE Ñ EN LA TABLA ASCII
            STR2_AUX[i] = 79;
        }
    }

    // COMPARAR LOS STRINGS ADICIONALES YA MODIFICADOS
    for(i = 0; i < largo_str1 && i < largo_str2; i++)
    {
        if(STR1_AUX[i] < STR2_AUX[i])
        {
            return -1;
        }

        if(STR1_AUX[i] > STR2_AUX[i])
        {
            return 1;
        }
    }

    // AMBOS UN STRING EMPIEZA CON EL OTRO (ej: caza y cazador), EL STRING MAS LARGO "VALE MAS"
    if(largo_str1 < largo_str2)
    {
        return -1;
    }
    if(largo_str1 > largo_str2)
    {
        return 1;
    }

    // AMBOS STRINGS SON IGUALES
    return 0;

    // TAMBIEN SE PODRIA USAR strcmp() ENTRE LOS STRINGS ADICIONALES YA MOFICICADOS
    // return strcmp(STR1_AUX, STR2_AUX);
}
