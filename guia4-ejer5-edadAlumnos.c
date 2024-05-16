#include <stdio.h>
#include <stdlib.h>
void pedirEdad(int e[]);
void mayorMneor(int v[]);
void categoriaEdad(int e[]);
int main()
{
    int e[10];
    pedirEdad(e);
    mayorMneor(e);
    categoriaEdad(e);
    getchar();
    return 0;

}
void pedirEdad(int e[])
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Ingrese la edad del alumno %d: ", i + 1);
        scanf("%d", &e[i]);
        fflush(stdout);
        
    }
}
void mayorMneor(int e[])
{
    int i;
    int mayor, menor;
    for (i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            mayor = e[i];
            menor = e[i];
        }
        if (e[i] > mayor)
        {
            mayor = e[i];
        }
        if (e[i] < menor)
        {
            menor = e[i];
        }
    }
    printf("edad mayor es %d y menor es %d \n", mayor, menor);
}
void categoriaEdad(int e[])
{
    int i;
    int menor12 = 0, entre12y13 = 0, entre17y20 = 0, mayor20 = 0;
    for (i = 0; i < 10; i++)
    {
        if (e[i] < 12)
        {
            menor12++;
        }
        else if (e[i] <= 12 && e[i] >= 13)
        {
            entre12y13++;
        }
        else if (e[i] >= 17 && e[i] <= 20)
        {
            entre17y20++;
        }
        else
        {
            mayor20++;
        }
    }
    printf("menores de 12: %d\n", menor12);
    printf("entre 12 y 13: %d\n", entre12y13);
    printf("entre 17 y 20: %d\n", entre17y20);
    printf("mayores de 20: %d\n", mayor20);
}
/*
Se tienen las edades de 10 alumnos de un curso y se necesita:
a. Calcular la mayor y menor edad del curso
b. Conocer cuántos alumnos pertenecen a cada una de las siguientes categorías:
i. Menores de 12 años
ii. Entre 12 y 13 años
iii. Entre 17 y 20 años
iv. Mayores a 20 años
*/