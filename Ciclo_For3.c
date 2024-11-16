/*  Alexis Aguirre Rojas
    Problemas Ciclo For, While - Guia de examen
    20 de noviembre de 2024 */

#include <stdio.h>

int main()
{
    int i, suma_p = 0, num;
    
    for (i = 10; i <= 50; i++){
        if (i % 2 == 0){
        suma_p += i;
        }
    }
    printf("\n\n\tLa suma de los numeros pares comprendidos entre 10 y 50 es: %d\n", suma_p);
    return 0;
}

