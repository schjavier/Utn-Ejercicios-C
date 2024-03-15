#include <stdio.h>
#include <stdlib.h>


//Ejercicio 9
//Condicionales


int main(){

   float numeroA, numeroB, numeroFinal;
   printf ("inserte un numero: ");
   scanf ("%f",&numeroA);
   printf ("inserte otro numero:");
   scanf("%f", &numeroB);
   if(numeroA != numeroB){
           if (numeroA> numeroB){
               numeroFinal = numeroA - numeroB;
               printf ("%.2f", numeroFinal);
           }else {numeroFinal = numeroA+numeroB;
           printf ("%.2f", numeroFinal);
                   }

   }else {
       numeroFinal = numeroA*numeroB;
       printf ("%.2f", numeroFinal);
   }


   return 0;
}
