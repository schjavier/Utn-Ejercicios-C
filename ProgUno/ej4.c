#include <stdio.h>
#include <stdlib.h>

//4. Desarrollar una funci�n que muestre la tabla de multiplicar de un n�mero entero recibido por par�metro.

// dato salida nombreVariable (tipo  de los argumentos)
void mostrarTabla(int);

int main()
{
   int numeroElegido;
   printf("Ingrese un numero: ");
   scanf("%i", &numeroElegido);

   mostrarTabla(numeroElegido);

    return 0;
}

//firma de la funcion
void mostrarTabla(int num){
    for (int i = 0 ; i <= 10; i++){
        int resultado = 0;
        resultado = num * i;
        printf("%d x %d = %d\n", num,i, resultado);

    }

}

