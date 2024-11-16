/*  Alexis Aguirre Rojas
    Problemas Condicional If - Guia de examen
    20 de noviembre de 2024 */

#include <stdio.h>

int main() 
{
    float sueldo, sueldo_aum1, sueldo_aum2, aum_1, aum_2;
    
    printf("\n\n\tIngresa el sueldo del trabajador: ");
    scanf("%f", &sueldo);
        if (sueldo<1000){
            aum_1 = (sueldo * 15/100);
            sueldo_aum1 = sueldo + aum_1;
            printf("\n\n\tEl sueldo aumentado del trabajador es %.2f",sueldo_aum1);
        }else{
            aum_2 = (sueldo * 12/100);
            sueldo_aum2 = sueldo + aum_2;
            printf("\n\n\tEl sueldo aumentado del trabajador es %.2f",sueldo_aum2);
        }
    printf("\n\n\tHasta luego");
    return 0;
}
