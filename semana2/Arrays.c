#include <stdio.h>

int main () {
    printf("--------Clase 2: Introduccion a los Arrays --------\n\n");
    // 1. Declaración e Inicialización:
    // Le decimos a C: "Crea un array de enteros llamado 'calificaciones' con 5 espacios"
    // Y directamente le guardamos 5 valores entre llaves { }.
    int calificaciones [5] = { 85, 92, 78, 100, 88};
    // 2. Acceder a los datos (Lectura):
    // Usamos el nombre del array y la posición (índice) entre corchetes [ ]
    printf("La nota del primer estudiante es: %d\n", calificaciones[0]);
    printf("La nota del cuarto estudidante es: %d\n", calificaciones[3]);
    // 3. Modificar los datos (Escritura):
    calificaciones[0]= 95;
    printf("La nota corregida del primer estudiante es: %d\n", calificaciones[0]);

    return 0;
}