#include <stdio.h>
#include <stdlib.h>

void main(){
    printf("Hello, World! \n");
    int valor1, valor2, r;
    valor1 = 2;
    valor2 = 2;
    r = (valor1 * valor2);
    printf("O resultado da multiplicação é: %d\n", r);
    r *= r;
    printf("O resultado ao quadrado é: %d", r);
}