/*  Alexis Aguirre Rojas
    Problemas con Arreglos - Guia de examen
    20 de noviembre de 2024 */
#include <stdio.h>
int main() 
{
    int n, i, numero_b, contador = 0;
    printf("Introduce el tamaño del arreglo: ");
    scanf("%d", &n);
    int arreglo[n];
    printf("Introduce los elementos del arreglo:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arreglo[i]);
    }
    printf("Introduce el numero a buscar: ");
    scanf("%d", &numero_b);
    for(i = 0; i < n; i++) {
        if(arreglo[i] == numero_b) {
            contador++;
        }
    }
    printf("El número %d aparece %d veces en el arreglo.\n", numero_b, contador);
    return 0;
}
