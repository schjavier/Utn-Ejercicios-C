//Ejecicio 6
//Condicionales

#include <stdio.h>
#include <stdlib.h>


int main(){

   float horasTrabajadas, horasExtras, salarioBase, salarioExtra, salarioSemanal;
   int valorHExtra = 400;
   int valorHora = 300;
   printf("Ingrese cantidad de horas trabajadas: ");
   scanf("%f", &horasTrabajadas);


   if (horasTrabajadas <= 40) {
       salarioSemanal = horasTrabajadas * valorHora;
       printf("Trabajaste cuarenta horas o menos y tu salario semanal es de: %.2f", salarioSemanal);
   } else {
       horasExtras = (horasTrabajadas - 40);
       salarioExtra = horasExtras * 400;
       salarioBase = (horasTrabajadas - horasExtras) * valorHora;
       salarioSemanal = salarioBase + salarioExtra;

       printf("Tu Salario semanal es de: %.2f", salarioSemanal);
   }


   return 0;
}

