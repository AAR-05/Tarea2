/*  Alexis Aguirre Rojas
    Problemas Ciclo For, While - Guia de examen
    20 de noviembre de 2024 */

#include <stdio.h>

int main()
{
    int i, n;
    
    printf("\n\n\tQue tabla (del 1 al 10) deseas conocer: ");
    scanf("%d", &n);
    printf("\n\n\tLa tabla de multiplicar de %d es la siguiente: ", n);
    for(i = 1; i < 11; i++){
        printf("\n\n\t %d * %d = %d\n", n, i, n * i);
        }
    return 0;
}
