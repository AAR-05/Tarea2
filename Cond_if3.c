/*  Alexis Aguirre Rojas
    Problemas Condicional If - Guia de examen
    20 de noviembre de 2024 */
#include <stdio.h>
int main()
{
    float dist_ida, dist_total, costo_sin_desc, costo_fin;
    int dias_est;
    printf("\n\n\tIngrese la distancia de ida (en km): ");
    scanf("%f", &dist_ida);
    printf("\n\n\tIngrese el número de días de estancia: ");
    scanf("%d", &dias_est);

    dist_total = dist_ida * 2;
    costo_sin_desc = dist_total * 0.23;

        if (dias_est > 7 && dist_total > 800) {
            costo_fin = (costo_sin_desc * 0.7);  
        } else {
            costo_fin = costo_sin_desc; 
        }
    printf("\n\n\tEl costo final del ticket es: %.2f\n", costo_fin);
    return 0;
}
