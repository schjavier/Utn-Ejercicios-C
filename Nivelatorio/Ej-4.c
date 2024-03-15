#include <stdio.h>
#include <stdlib.h>

// ejercicio 4
// Condicionales
int main()
{

   float notaUno, notaDos, notaTres;
   float promedio;

   printf("Ingrese la nota uno: ");
   scanf("%f", &notaUno);
   printf("Ingrese la nota dos: ");
   scanf("%f", &notaDos);
   printf("Ingrese la nota tres: ");
   scanf("%f", &notaTres);

   promedio = (notaUno + notaDos + notaTres) / 3;

   if (promedio >= 7)
       {
           printf("Tu promedio es: %.2f y estas aprobado" , promedio);

   }
   else {

       printf("Tu promedio es: %.2f y estas desaprobado!", promedio);
   }

   return 0;
}
