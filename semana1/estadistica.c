// Reto 6 (El Clasificador de Estadísticas):
// Crea un programa que le pida al usuario que ingrese números sin parar. 
// El programa debe detenerse cuando el usuario ingrese un 0. //
// Durante el proceso, el programa debe contar cuántos números positivos se ingresaron y cuántos números negativos se ingresaron. 
// Al terminar, debe imprimir: "Ingresaste X números positivos y Y números negativos".
// (Pista: necesitarás dos variables que funcionen como contadores sumando de a 1).
#include <stdio.h>

int main () {
    // 1. Inicializamos todas las variables en 0
    int numero = 0;
    int contador_positivos = 0;
    int contador_negativos = 0;

    // 2. Iniciamos el ciclo de recolección de datos
    do {
        printf("Digite un numero: o presione 0 para salir: ");
        scanf("%d", &numero);

        // 3. Clasificación de las estadísticas
        if (numero > 0) {
            contador_positivos++;
        } else if (numero < 0) {
            contador_negativos++;
        }
    // 4. Continuamos el ciclo hasta que el usuario ingrese 0. Condicion de salida.    
    } while (numero != 0);

    // 5. Imprimimos el resultado final
    printf("Ingresaste %d numeros positivos y %d numeros negativos\n", contador_positivos, contador_negativos);
return 0;    
}