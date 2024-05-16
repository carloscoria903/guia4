#include <stdio.h>
#include <stdlib.h>
void ordenar(int v[], int n);
int main()
{
    int v[100];
    int n;
    int i;
    printf("ingrese el tamaño del vector ");
    scanf("%d", &n);
    fflush(stdout);
    for (i = 0; i < n; i++)
    {
        printf("Ingrese el numero en la posicion %d :", i + 1);
        scanf("%d", &v[i]);
        fflush(stdout);
    }
    ordenar(v, n);
    printf("numeros ordenados:\t");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", v[i]);
    }
    getchar();
    return 0;
}
void ordenar(int v[], int n)
{
    int i, j, aux;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}
/*
Solicite al usuario que ingrese N números y almacénelos en un vector. Imprima los
números ingresados por el usuario ordenados de menor a mayor.
*/