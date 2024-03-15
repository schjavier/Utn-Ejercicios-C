#include <stdio.h>
#include <stdlib.h>
#include "pila.h"


//14.- Determinar si la cantidad de elementos de la pila DADA es par. Si es par, pasar el
//elemento del tope de la pila AUX a la pila PAR
//y si es impar pasar el tope a la pila IMPAR (el ejercicio debe ser realizado SIN contar los elementos)

// esta mal realizado



int main()
{

   Pila dada, par, impar, aux;
   inicpila(&dada);
   inicpila(&par);
   inicpila(&impar);
   inicpila(&aux);

   int auxSize=10;
   for (int i = 0; i < auxSize; i++){
    apilar(&aux, rand()%100);
   }

   mostrar(&aux);
    int seguir = 1;
    int vueltas = 0;

    while(seguir == 1 && vueltas <= 50){

        leer(&dada);
        printf("ingrese 1 si quiere continuar, o cualquier otro numero para salir: ");
        scanf("%i", &seguir);
        vueltas++;
    }

    if ((vueltas % 2) == 0) {
        apilar(&par, desapilar(&aux));

    } else {
        apilar(&impar, desapilar(&aux));
    }
    mostrar(&aux);
    printf("Pila par: ");
    mostrar(&par);
    printf("Pila impar: ");
    mostrar(&impar);

    return 0;
}

