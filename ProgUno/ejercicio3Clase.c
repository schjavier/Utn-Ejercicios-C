#include <stdio.h>
#include <stdlib.h>

int sumar (int,int);
void mostrar(int);
void sumarMostar(int, int);

int main()
{
    int numA = 5;
    int numB = 7;

    sumarMostar(numA, numB);


    return 0;
}

int sumar (int numA,int numB){
int suma = numA + numB;
return suma;
}

void mostrar(int resultado){
    printf("\n el resultado de la suma es: %d", resultado);

}

void sumarMostar(int num1, int num2){

    int resultado = sumar(num1, num2);
    mostrar(resultado);

}



