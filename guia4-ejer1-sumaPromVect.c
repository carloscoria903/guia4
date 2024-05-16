#include <stdio.h>
#include <stdlib.h>
void pedNum(int v[]);
void suma(int v[]);
void promedio(int v[]);
void maximo(int v[]);
void minimo(int v[]);
void contrario(int v[]);
int main()
{
    int v[10];
    pedNum(v);
    suma(v);
    promedio(v);
    maximo(v);
    minimo(v);
    contrario(v);
    getchar();
    return 0;
}
void pedNum(int v[10])
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Ingrese un numero en la posicion %d : ", i+1);
        scanf("%d", &v[i]);
        fflush(stdout);
    }
}
void suma(int v[])
{
    int i;
    int suma = 0;
    for (i = 0; i < 10; i++)
    {
        suma = suma + v[i];
    }
    printf("la suma es :%d\n", suma);
}
void promedio(int v[])
{
    int i;
    int suma = 0;
    for (i = 0; i < 10; i++)
    {
        suma = suma + v[i];
    }
    printf("el promedio es :%d\n", suma / 10);
}
void maximo(int v[])
{
    int i;
    int max = v[0];
    for (i = 0; i < 10; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
    }
    printf("el maximo es :%d\n", max);
}
void minimo(int v[])
{
    int i;
    int min = v[0];
    for (i = 0; i < 10; i++)
    {
        if (v[i] < min)
        {
            min = v[i];
        }
    }
    printf("el minimo es :%d\n", min);
}
void contrario(int v[])
{
    int i;
    for (i = 9; i >= 0; i--)
    {
        printf("numeros invertidos %d\n", v[i]);
    }
}

/*
Solicite al usuario 10 números y almacénelos en un vector. A partir del vector imprima:
a- La suma de todos los elementos
b- El promedio
c- El máximo y mínimo elemento
d- Imprima los elementos en el orden contrario al que fueron ingresados.
*/
/*int main() {
    int v[10];
    int i;
    for(i = 0; i < 10; i++){
        printf("Ingrese un numero en la posicion %d : " , i);
        scanf("%d", &v[i]);
        fflush(stdout);
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n", v[i]);
    }
    getchar();
    return 0;
}*/