#include <stdio.h>
#include <stdlib.h>

//ejercicio 2



int main(){

   float valorCompra, compraConDescuento;
   float descuento = 0.15;
   printf("Indique el valor de la compra: ");
   scanf("%f", &valorCompra);
   compraConDescuento = valorCompra - (valorCompra * descuento);
   printf("El valor final es de: %f", compraConDescuento);
}
