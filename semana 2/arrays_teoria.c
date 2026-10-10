// Un array es una estructura de datos que permite almacenar múltiples valores del mismo tipo en una sola variable. Cada valor en un array se llama elemento y se accede a él mediante un índice, que indica su posición en el array. Los arrays son útiles para organizar y manipular grandes cantidades de datos de manera eficiente.
// En C, los arrays se declaran especificando el tipo de datos de sus elementos y el número de elementos que contendrá. Por ejemplo, para declarar un array de enteros con 5 elementos, se puede usar la siguiente sintaxis:
#include <stdio.h>
int main() {
    printf("Ejemplo Nro. 1 de declaración, inicialización y asignación de valores a un array:\n");
    int numeros[5]; // Declaración de un array de enteros con 5 elementos

    // Asignación de valores a los elementos del array
    numeros[0] = 10;
    numeros[1] = 20;
    numeros[2] = 30;
    numeros[3] = 40;
    numeros[4] = 50;

    // Acceso a los elementos del array y su impresión
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, numeros[i]);
    }

    printf("\n");
    printf("Ejemplo Nro. 2 de inicialización y asignación de valores a un array:\n");
    // También se puede inicializar un array al momento de su declaración
    int otros_numeros[5] = {1, 2, 3, 4, 5};
    // Acceso a los elementos del array inicializado y su impresión
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, otros_numeros[i]);
    }

    printf("\n");
    printf("Ejemplo Nro. 3 de asignación de valores a un array utilizando un bucle:\n");
    // Asimismo se puede asignar valores a un array utilizando un bucle
    int mas_numeros[5];
    for (int i = 0; i < 5; i++) {
        mas_numeros[i] = i;
    }
    // Acceso a los elementos del array asignado y su impresión
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, mas_numeros[i]);
    }

    printf("\n");
    printf("Ejemplo Nro. 4 de declaración, inicialización y asignación de valores a un array de caracteres:\n");
    // También se pueden declarar arrays de otros tipos de datos, como caracteres
    char letras[5] = {'A', 'B', 'C', 'D', 'E'};
    // Acceso a los elementos del array de caracteres y su impresión
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %c\n", i, letras[i]);
    }

    printf("\n");
    printf("Ejemplo Nro. 5 de declaración, inicialización y asignación de valores a un array de cadenas de caracteres:\n");
    // También se pueden declarar arrays de cadenas de caracteres (arrays de arrays de caracteres)
    char nombres[3][20] = {"Juan", "María", "Pedro"};
    // Acceso a los elementos del array de cadenas de caracteres y su impresión
    for (int i = 0; i < 3; i++) {
        printf("Elemento %d: %s\n", i, nombres[i]);
    }

    printf("\n");
    printf("Asimismo se puede declarar un array sin especificar su tamaño, en cuyo caso el compilador determinará automáticamente el tamaño del array según la cantidad de elementos inicializados:\n");
    int numeros_sin_tamano[] = {100, 200, 300, 400, 500};
    // Acceso a los elementos del array sin tamaño especificado y su impresión
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, numeros_sin_tamano[i]);
    }

    printf("\n");
    printf("Ejemplo Nro. 6 de declaracion, inicializacion y asignacion de valores a un array de dos dimensiones:\n");
    // También se pueden declarar arrays de dos dimensiones (matrices)
    int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // Acceso a los elementos del array de dos dimensiones y su impresión
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: %d\n", i, j, matriz[i][j]);
        }
    }

    // Por otra parte un array no puede cambiar su tamaño una vez declarado, por lo que si se necesita almacenar una cantidad variable de elementos, se puede utilizar memoria dinámica (malloc, calloc, realloc) para crear un array dinámico.
    // Tampoco puede asignarse un array a otro array directamente, ya que los arrays son tratados como punteros en C. Para copiar los elementos de un array a otro, se debe utilizar un bucle o funciones específicas como memcpy.
    // Con lo cual para copiarse un array a otro, se puede utilizar un bucle for para recorrer los elementos del array original y asignarlos al array destino. Por ejemplo:
    printf("\n");
    printf("Ejemplo Nro. 7 de copia de un array a otro utilizando un bucle:\n");
    int array_origen[5] = {1, 2, 3, 4, 5};
    int array_destino[5];
    for (int i = 0; i < 5; i++) {
        array_destino[i] = array_origen[i];
    }
    // Acceso a los elementos del array destino y su impresión
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, array_destino[i]);
    }
    // Ahora bien, un array no cumple con la regla de passed by value aplicado a las variables entre funciones, ya que cuando se pasa un array a una función, lo que se pasa es la dirección de memoria del primer elemento del array, y no una copia completa del array. 
    // Por lo tanto, cualquier modificación realizada en el array dentro de la función afectará al array original fuera de la función.
    

    return 0;
}