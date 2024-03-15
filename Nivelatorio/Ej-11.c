
//Ejercicio 11
//Estructuras Repetitivas

#include <stdio.h>
#include <stdlib.h>


int main(){

   int i=1, nota, sumaNotas;
   float promedio;
   sumaNotas = 0;
    while(i<=7) {
       printf ("ingrese la nota de su examen:");
       scanf ("%i", &nota);

       sumaNotas = sumaNotas + nota;

       i++;
    }
    promedio= sumaNotas / 7;
    printf ("el promedio es de: %f",promedio);



return 0;
}
