#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main(){


int num = 0;

srand(time(NULL)); // limpia el cache de rand

num = rand() %100 + 1; /** rand() entrega nro aleatorio
                           %100 es el numero limite que entraga rand
                            +1 suma uno al numero obtenido **/
printf("%i", num);

}
