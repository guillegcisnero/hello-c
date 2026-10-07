#include <stdio.h>

int main() {
    int edad = 0;
    int contador_mayores = 0;

    do {
        printf("Ingresa una edad (o un numero negativo para salir): ");
        
        // guardar el dato
        scanf("%d", &edad);

        if (edad > 18) {
            // suma si es mayor de 18 a la segunda variable
            contador_mayores++;
        }
 
    // El bucle se repite MIENTRAS la edad sea mayor o igual a 0.
    // Si el usuario ingresa -1, -5 o -100, la condición es falsa y el bucle termina.
    } while (edad >= 0); 

    printf("Total de personas mayores de 18 años: %i\n", contador_mayores);

    return 0;
}