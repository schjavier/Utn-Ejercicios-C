#include <stdio.h>
#include <stdlib.h>

// ejercicio3

int main()
{

    int cantidadDeHombres, cantidadDeMujeres, totalAlumnos, porcentajeDeHombres, porcentajeDeMujeres;
    printf("indique la cantidad de hombres:");
    scanf("%i", &cantidadDeHombres);
    printf("indique la cantidad de mujeres:");
    scanf("%i", &cantidadDeMujeres);
    totalAlumnos = cantidadDeHombres + cantidadDeMujeres;
    porcentajeDeHombres = (cantidadDeHombres * 100) / totalAlumnos;
    porcentajeDeMujeres = (cantidadDeMujeres * 100) / totalAlumnos;

    printf("El total de personas es:%i y el porcentaje de hombre es: %i %, el porcentaje de mujeres es: %i %", totalAlumnos, porcentajeDeHombres, porcentajeDeMujeres);
}
