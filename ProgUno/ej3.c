#include <stdio.h>
#include <stdlib.h>

//3. Diseñe una función que reciba un número entero N y realice la suma de los
//   números enteros positivos menores que N y lo retorne. N es un  dato ingresado
//   por el usuario en el main.


// dato salida nombreVariable (tipo  de los argumentos)

int sumaPositivos(int); //prototipo


int main()
{
   int numeroElegido;
   int sumatoriaNro = 0;
   printf("Ingrese un numero: ");
   scanf("%i", &numeroElegido);
    sumatoriaNro = sumaPositivos(numeroElegido);

    printf("la sumatoria de todos lo numero positivos menos al nro elegido es: %d", sumatoriaNro);

    return 0;
}

//firma de la funcion
int sumaPositivos(int numero){
    int sumatoria = 0;
    for(int i=0; i <= numero; i++){
        sumatoria = sumatoria + i;

    }
 return sumatoria;

}


