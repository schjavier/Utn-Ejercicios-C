//Ejercicio 8
//Condicionales

#include <stdio.h>
#include <stdlib.h>


int main(){

   const float descuento1 = 0.1;
   const float descuento2 = 0.2;
   const float valorCamisas = 100;
   int cantidadCamisas;
   float montoCamisas, montoFinal;

   printf ("Ingrese la cantidad de camisas compradas: ");
   scanf("%i", &cantidadCamisas);

   if (cantidadCamisas >= 3){
       montoCamisas = cantidadCamisas * valorCamisas;
       montoFinal = montoCamisas - (montoCamisas * descuento2);
       printf("El monto a pagar es: %.2f", montoFinal);

   } else {
       montoCamisas = cantidadCamisas * valorCamisas;
       montoFinal = montoCamisas - (montoCamisas * descuento1);
       printf("El monto a pagar es: %.2f", montoFinal);
   }



   return 0;
   }
