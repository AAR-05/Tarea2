/*  Alexis Aguirre Rojas
    Problemas con Arreglos - Guia de examen
    20 de noviembre de 2024 */

#include <stdio.h>

int main() 
{
    int n, i, suma = 0;
    printf("Introduce el tamaño del arreglo: ");
    scanf("%d", &n);
    int arreglo[n];
    printf("Introduce los elementos del arreglo:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arreglo[i]);
    }
    for(i = 0; i < n; i++) {
        suma += arreglo[i];
    }
    printf("La suma de los elementos del arreglo es: %d\n", suma);

    return 0;
}
