// Ejercicio 7
//Condicionales

#include <stdio.h>
#include <stdlib.h>



int main ()
{

   float numeroA, numeroB;
   printf ("inserte un numero: ");
   scanf ("%f",&numeroA);
   printf ("inserte otro numero:");
   scanf("%f", &numeroB);
   if(numeroA != numeroB)
   {

       if (numeroA > numeroB)
       {
           printf ("%.2f \n",numeroB);
           printf ("%.2f \n",numeroA);

       }
       else {

           printf ("%.2f \n", numeroA);
           printf ("%.2f \n", numeroB);

       }
   }else {
       printf("Los numeros son iguales, no puedo ordenarlos");
   }



   return 0;
}
