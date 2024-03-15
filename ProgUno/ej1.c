#include <stdio.h>
#include <stdlib.h>
int nroAleatorio();

int main()
{
    int nroRandom = 0;
    nroRandom = nroAleatorio();

    printf("\n%i", nroRandom);


    return 0;
}

int nroAleatorio(){
    srand(time(NULL));
    int numero = rand()%100;
    return numero;
    }


