//Enlazar los archivos .h (header) y .c, en un punto exe
//gcc main.c funciones.c -o nombre
#include <stdio.h>
#include "funciones.h"
int main(int argc, char *argv[])
{

    int op;
    float x, y, res;

    op = menu();

    switch (op)
    {
    case 1:
        printf("Ingrese el num 1: ");
        scanf("%f", &x);
        printf("Ingrese el num 2: ");
        scanf("%f", &y);
        res = suma(x, y);
        printf("La suma es: %f\n", res);
        break;
    case 2:
        printf("Ingrese el num 1: ");
        scanf("%f", &x);
        printf("Ingrese el num 2: ");
        scanf("%f", &y);
        res = resta(x, y);
        printf("La resta es: %f\n", res);
        break;
    case 3:
        printf("Ingrese el num 1: ");
        scanf("%f", &x);
        printf("Ingrese el num 2: ");
        scanf("%f", &y);
        res = multiplicacion(x, y);
        printf("La multiplicacion es: %f\n", res);
        break;
    case 4:
        printf("Ingrese el num 1: ");
        scanf("%f", &x);
        printf("Ingrese el num 2: ");
        scanf("%f", &y);
        res = division(x, y);
        printf("La division es: %f\n", res);
        break;
    default:
        break;
    }
    return 0;
}
