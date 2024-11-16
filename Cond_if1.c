/*  Alexis Aguirre Rojas
    Problemas Condicional If - Guia de examen
    20 de noviembre de 2024 */

#include <stdio.h>

int main() 
{
    float desc, precio_f, compra;
    
    printf("\n\n\tIngrese el monto de compra del cliente: ");
    scanf("%f", &compra);
        if (compra>2500)
        {
            desc = (compra * 8/100);
            printf("\n\n\tEl descuento en su compra fue de %.2f pesos", desc);
            precio_f = compra - desc;
            printf("\n\n\tEl precio de tu compra con el descuento incluido es %.2f pesos", precio_f);
        }else
        printf("\n\n\tTu compra no tiene descuento");
    return 0;
}
