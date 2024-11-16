/*  Alexis Aguirre Rojas
    Problemas simples - Guia de examen
    20 de noviembre de 2024 */

#include <stdio.h>
#include <math.h>

int main()
{
    int radio = 5, area, circunferencia;
    float pi = 3.1416;
    
    area = pi * pow(radio,2);
    circunferencia = 2 * pi * radio;
    printf("\n\n\tEl area del circulo es: %d", area);
    printf("\n\n\tEl perimetro del circulo es: %d", circunferencia);
    return 0;
}
