/*  Alexis Aguirre Rojas
    Problemas Condicional If - Guia de examen
    20 de noviembre de 2024 */

#include <stdio.h>

int main() 
{
    int a, b;

    printf("\n\n\tDame un numero: ");
    scanf("%d", &a);
    printf("\n\n\tDame otro numero: ");
    scanf("%d", &b);
        if (a % b == 0 || b % a == 0) {
            printf("\n\n\tUno de los números es divisor del otro");
        } else {
            printf("\n\n\tNingún número es divisor del otro");
        }
    return 0;
}
