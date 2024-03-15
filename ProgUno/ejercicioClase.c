#include <stdio.h>
#include <stdlib.h>

int sumar (int,int);
void mostrar(int);

int main()
{
    int numA = 5;
    int numB = 7;
    int numC = 8;
    int suma = 0;

    suma = sumar (numB,numA);

    mostrar(suma);

    suma = sumar(suma, numC);

    mostrar(suma);

    return 0;
}

int sumar (int numA,int numB){
int suma = numA + numB;
return suma;
}

void mostrar(int resultado){
    printf("\n%d", resultado);

}


