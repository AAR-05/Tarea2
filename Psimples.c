/*  Alexis Aguirre Rojas
    Problemas simples - Guia de examen
    20 de noviembre de 2024 */

#include <stdio.h>

int main()
{
    int num1, num2, suma, resta, mult;
    
    printf("\n\n\tDame dos numeros para calcular su suma, resta y multiplicacion: ");
    scanf("%d %d", &num1, &num2);
    suma = num1 + num2;
    resta = num1 - num2;
    mult = num1 * num2;
    printf("\n\n\tEl resultado de la suma es: %d", suma);
    printf("\n\n\tEl resultado de la resta es: %d", resta);
    printf("\n\n\tEl resultado de la multiplicacion es: %d", mult);
    return 0;
}
