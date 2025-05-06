#include <stdio.h>
#include "funciones.h"

int menu()
{
    int opc;
    printf("Seleccione una opcion\n");
    printf("1.Suma\n");
    printf("2.Resta\n");
    printf("3.Multiplicacion\n");
    printf("4.Division\n");
    printf(">> ");
    scanf("%d", &opc);
    return opc;
}

float suma(float a, float b)
{
    float r;
    r = a + b;
    return r;
}

float resta(float a, float b)
{
    float r;
    r = a - b;
    return r;
}

float multiplicacion(float a, float b)
{
    float r;
    r = a * b;
    return r;
}

float division(float a, float b)
{
    float r = 0;
    if (b != 0)
    {
        r = a / b;
    }
    else
    {
        printf("No se puede dividir para 0\n");
    }
    return r;
}