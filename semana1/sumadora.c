#include <stdio.h>

int main () {    
    int numero = 0;
    int acumulado = 0; 
    do {
        printf("Dime un numero: ");
        scanf ("%d", &numero);
        acumulado += numero; // Esto es lo mismo que acumulado = numero + acumulado (Es decir actualiza el argumento izquierdo sumando el argumento derecho)
        
    } while (numero != 0); // Evalúa al final, si el numero es distino a 0 continua con el bucle, es decir, continua solicitando valores al usuario.    
    printf ("La suma total es: %d\n", acumulado);
    return 0;
}