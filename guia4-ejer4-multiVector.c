#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[5];
    int b[5];
    int c[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Ingrese numeros para el vector A %d : ", i);
        scanf("%d", &a[i]);
        fflush(stdout);
    }
    printf("ingrese numeros para el vector B\n");
    for (i = 0; i < 5; i++)
    {
        printf("Ingrese un numero en la posicion %d : ", i);
        scanf("%d", &b[i]);
        fflush(stdout);
    }
    printf("vector C : \n");
    for (i = 0; i < 5; i++)
    {
        c[i] = (a[i] * b[i]) / 2;
        printf("%d\n", c[i]);
    }
    
    getchar();
    return 0;
}
/*
Dados dos vectores A y B de 5 elementos cada uno, genere un vector C a partir de la siguiente fórmula:
C[i] = (A[i] * B[i]) / 2
*/