#include <stdio.h>
#include <stdlib.h>
#include "pila.h"


//13.-  Suponiendo la existencia de una pila LÍMITE, pasar los elementos de la pila DADA que sean mayores o
// iguales que el tope de LIMITE a la pila MAYORES, y los elementos que sean menores a la pila MENORES.





int main()
{

    Pila dada, limite, mayores, menores;
   inicpila(&dada);
   inicpila(&limite);
   inicpila(&mayores);
   inicpila(&menores);


   int limiteSize = 6;
    int seguir = 1;
    int vueltas = 0;


    for (int i=1; i <= 6 ; i++){
        apilar(&limite, i);

    }

    while(seguir == 1 && vueltas <= 50){

        leer(&dada);
        printf("ingrese 1 si quiere continuar, o cualquier otro numero para salir: ");
        scanf("%i", &seguir);
        vueltas++;
    }

    while (!pilavacia(&dada)){

        if(tope(&dada) >= tope(&limite)){
            apilar(&mayores, desapilar(&dada));

        } else {
            apilar(&menores, desapilar(&dada));
        }


    }

    printf("\nEsta es la lista de mayores: ");
    mostrar(&mayores);
    printf("\nEsta es la lista de menores: ");
    mostrar(&menores);

    return 0;
}

