#include <stdio.h>
#include <stdlib.h>
void unio(int a[], int b[], int uni[], int n);
void interseccion(int a[], int b[], int inter[], int n);
int main()
{
    int a[5];
    int b[5];
    int uni[10];
    int inter[5] = {0};
    int i, n = 5;
    printf("ingrese los numeros para el primer conjunto");
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("Ingrese un numero en la posicion %d : ", i + 1);
        scanf("%d", &a[i]);
        fflush(stdout);
    }
    printf("\n");
    printf("ingrese los numeros para el segundo conjunto");
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("Ingrese un numero en la posicion %d : ", i + 1);
        scanf("%d", &b[i]);
        fflush(stdout);
    }
    unio(a, b, uni, n);
    interseccion(a, b, inter, n);
    getchar();
    return 0;
}
void unio(int a[], int b[], int uni[], int n)
{
    int i, j, cont = 0;
    for (i = 0; i < n; i++)
    {
        uni[cont++] = a[i];
    }
    for (i = 0; i < n; i++)
    {
        int aux = 0;
        for (j = 0; j < cont; j++)
        {
            if (b[i] == uni[j])
            {
                aux = 1;
                break;
            }
        }
        if (!aux)
        {
            uni[cont++] = b[i];
        }
    }

    printf("\nLa unión es: ");
    for (i = 0; i < cont; i++)
    {
        printf("%d ", uni[i]);
    }
    printf("\n");
}
void interseccion(int a[], int b[], int inter[], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i] == b[j]) {
                inter[i] = a[i];
                break;
            }
        }
    }
    printf("La intersección es: ");
    for (i = 0; i < n; i++) {
        if (inter[i] != 0) {
            printf("%d ", inter[i]);
        }
    }
    printf("\n");
}
/*
Dados dos arreglos A y B con 5 números enteros cada uno (no repetidos dentro del vector), los cuales simulan ser conjuntos:
a. Calcular la unión de ambos arreglos
b. Calcular la intersección de ambos arreglos
*/