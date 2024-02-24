#include <stdio.h>
#include <stdlib.h>

// ejercicio 1

const float interes = 0.02;

int main()
{
    int capital;
    float montoFinal, ganancia;

    printf("coloque la cantidad de dinero a invertir: ");
    scanf ("%i", &capital);
    ganancia = capital * interes;
    montoFinal = capital + interes;
    printf ( "la cantidad de dinero obtenido es:%.2f", montoFinal);

    return 0;
}

