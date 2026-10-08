#include <stdio.h>

int main() {
    // 1. Declaramos un Array de 5 posiciones, listo para recibir datos
    int mis_numeros[5];

    printf("--- Llenando el Array interactivo ---\n");

    // 2. Bucle para llenar el array
    for (int i=0 ; i< 5; i++) {
        printf("Ingresa el valor numero %d: ", i + 1 );
        scanf("%d", &mis_numeros[i]);
    }
    
    printf("Array llenado con exito!\n");
    printf("Los numeros recibidos son: "); 
    // 3. Imprimimos los primeros 4 elementos (índices 0, 1, 2 y 3)
    // Todos llevan coma y espacio
    for (int j = 0; j<4; j++) {
        printf("%d, ", mis_numeros[j]);
    }
    // 4. Imprimimos el QUINTO y último elemento (índice 4)
    printf(" %d.\n", mis_numeros[4]);
    return 0;
}