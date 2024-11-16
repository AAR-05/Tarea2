/*  Alexis Aguirre Rojas
    Problemas Ciclo For, While - Guia de examen
    20 de noviembre de 2024 */
#include <stdio.h>
int main()
{
    int i, num, nulos = 0, positivos = 0, negativos = 0;   
    for(i = 0; i < 100; i++){
        printf("\n\n\tDa el numero %d: ", i);
        scanf("%d", &num);
        if (num < 0){
            negativos++;
        } else if (num > 0){
            positivos++;
        }else{
            nulos++;
        }
    }
    printf("\n\n\tPositivos; %d", positivos);
    printf("\n\n\tNegativos; %d", negativos);
    printf("\n\n\tNulos; %d", nulos);
}
