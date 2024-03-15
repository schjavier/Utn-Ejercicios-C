
//ejercicio 12
//Estructuras Repetitivas

#include <stdio.h>
#include <stdlib.h>


int main(){

int numero, cubo, cuarta;

for (int i = 0; i <= 10; i++){
    printf("ingrese un numero: ");
    scanf("%i", &numero);
    cubo = numero * numero * numero;
    cuarta = numero * numero * numero * numero;
    printf("El cubo del nro. es: %i y la cuarta es: %i \n", cubo, cuarta);

}

return 0;
}