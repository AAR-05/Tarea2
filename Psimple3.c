/*  Alexis Aguirre Rojas
    Problemas simples - Guia de examen
    20 de noviembre de 2024 */

#include <stdio.h>

int main()
{
    float dolar, peso_mexa, conversion;
    
    printf("\n\n\tCuantos dolares desea convertir a pesos mexicanos: ");
    scanf("%f", &dolar);
    conversion = dolar * 11.96;
    printf("\n\n\tLa conversión a pesos mexicanos es: %.2f", conversion);
    return 0;
}
