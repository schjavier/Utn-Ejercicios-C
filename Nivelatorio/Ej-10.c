//Ejercicio 10
//Condicionales

#include <stdio.h>
#include <stdlib.h>


int main(){

   float numeroA, numeroB, numeroC;

   printf("ingrese un numero: ");
   scanf("%f", &numeroA);

   printf("ingrese un numero: ");
   scanf("%f", &numeroB);

   printf("ingrese un numero: ");
   scanf("%f", &numeroC);

   if (numeroA > numeroB && numeroA > numeroC){
       printf("%.2f", numeroA);

   } else if (numeroB > numeroA && numeroB > numeroC) {
       printf("%.2f", numeroB);

   } else if (numeroC > numeroA && numeroC > numeroB) {

       printf("%.2f", numeroC);

   }


return 0;
}
