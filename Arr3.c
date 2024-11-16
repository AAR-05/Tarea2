/*  Alexis Aguirre Rojas
    Problemas con Arreglos - Guia de examen
    20 de noviembre de 2024 */

#include <stdio.h>

int main() 
{
    int n, i, positivos = 0, negativos = 0, nulos = 0;

    printf("\n\n\tIngrese el tamaño del arreglo: ");
    scanf("%d", &n);
    int arreglo[n];
    printf("\n\n\tIngrese los elementos del arreglo:\n");
    for (i = 0; i < n; i++) {
        printf("\n\n\tElemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
        if (arreglo[i] > 0) {
            positivos++;
        } else if (arreglo[i] < 0) {
            negativos++;
        } else {
            nulos++;
        }
    }
    printf("\nResultados:\n");
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos: %d\n", nulos);
    return 0;
}

