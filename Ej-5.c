//Ejercicio 5
//Condicionales
#include <stdio.h>
#include <stdlib.h>



int main()
{
   const float descuento = 0.2;
   const float compraMinima = 5000;
   float montoCompra, montoFinal;
   printf ("Ingrese el valor de su compra:");
   scanf ("%f",&montoCompra);
   if (montoCompra > compraMinima){
       montoFinal = montoCompra - (montoCompra * descuento);
       printf ("tu valor de tu compra con descuento es de:%.2f", montoFinal);


   }else{
       printf ("no superaste el valor minimo para obtener descuento, el valor de tu compra es:%.2f", montoCompra);
   }


   return 0;
}
