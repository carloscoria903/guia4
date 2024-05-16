#include <stdio.h>
#include <stdlib.h>
int main()
{
    float v[100];
    int i, n;
    float suma = 0;
    printf("ingrese el tamaño del vector ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("ingrese un numero en la posicion %d : ", i);
        scanf("%f", &v[i]);
        suma = suma + v[i];
    }
    printf("el promedio es %.2f \n", suma / n);
    for (i = 0; i < n; i++)
    {
        if (v[i] > suma / n)
        {
            printf("numeros mayor al promedio %.2f\n", v[i]);
        }
    }
    getchar();
    return 0;
}
/*
Solicite al usuario N números reales y almacénelos en un vector.
Calcule el promedio e imprima los números mayores al promedio.
*/