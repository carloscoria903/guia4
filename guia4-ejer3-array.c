#include <stdio.h>
#include <stdlib.h>
void parInpar(int a[], int n);
void multiplo(int b[], int n);
int main()
{
    int a[100];
    int b[100];
    int n, i;
    printf("ingrese el tamaño del vector ");
    scanf("%d", &n);
    fflush(stdout);
    for (i = 0; i < n; i++)
    {
        printf("Ingrese el numero en la posicion %d :", i);
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    printf("numeros pares y impares \n");
    parInpar(a, n);
    printf("\n");
    printf("multiplos de 3 \n");
    multiplo(b, n);

    getchar();
    return 0;
}
void parInpar(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d ", a[i]);
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            printf("%d ", a[i]);
        }
    }
}
void multiplo(int b[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (b[i] % 3 == 0)
        {
            printf("%d ", b[i]);
        }
    }
}
/*
Dado un arreglo de N elementos enteros
a. Generar un arreglo A donde estén primero los elementos pares y luego los impares.
b. Generar un arreglo B con los elementos múltiplos de 3
*/