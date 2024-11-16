/*  Alexis Aguirre Rojas
    Problemas simples - Guia de examen
    20 de noviembre de 2024 */

#include <stdio.h>
int main() 
{
    float capital, tasa, monto;

    printf("Ingrese el capital inicial: ");
    scanf("%f", &capital);
    printf("Ingrese la tasa de interés mensual (en porcentaje): ");
    scanf("%f", &tasa);

    monto = capital * (1 + tasa / 100);
    printf("El monto total al finalizar el mes es: %.2f\n", monto);
    return 0;

}

