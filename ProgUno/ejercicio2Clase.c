#include <stdio.h>
#include <stdlib.h>
void mostrarNro(float);

int main()
{

    mostrarNro(3.23);
    mostrarNro(54.5674);
    mostrarNro(390.6746);

    return 0;
}

void mostrarNro(float numA){
    printf("\nEl numero es: %f", numA);

}

