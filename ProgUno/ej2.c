#include <stdio.h>
#include <stdlib.h>

//2. Diseñe una función que reciba 3 números enteros y muestre el mayor y el menor.

// dato salida nombreVariable (tipo  de los argumentos)
void clasificar(int, int, int); //prototipo


int main()
{
    int numA = 1;
    int numB = 2;
    int numC = 1;

    clasificar(numA, numB, numC);

    return 0;
}

//firma de la funcion
void clasificar(int num1, int num2, int num3)
{

    // comienzo cuerpo

    int mayor = 0;
    int menor = 0;

if (num1 == num2 || num2 == num3 || num1 == num3){

    printf("numeros iguales no puedo clasificar :(");
} else {

    if (num1 > num2 && num1 > num3 )
    {
        mayor = num1;
        if (num2 > num3)
        {
            menor = num3;
        }
        else
        {
            menor  = num2;
        }
    }
    else if (num2 > num1 && num2 > num3)
    {
        mayor = num2 ;
        if(num1 > num3)
        {
            menor = num3;
        }
        else
        {
            menor = num1;
        }
    }
    else if (num3 > num1 && num3 > num2)
    {
        mayor = num3;
        if(num2 > num1)
        {
            menor = num1;
        }
        else
        {
            menor = num2;
        }
    }

    printf("el numero mayor es: %d y el menor es: %d", mayor, menor);
    // final cuerpo

}



}
