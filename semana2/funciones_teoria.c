// Comenzamos con la teoria de funciones en C. Una función es un bloque de código que realiza una tarea específica y puede ser reutilizado en diferentes partes del programa. 
// Las funciones ayudan a organizar el código, mejorar la legibilidad y facilitar el mantenimiento.
#include <stdio.h>
#include <string.h>

// Declaración de la función suma como prototipo. Esta línea indica al compilador que existe una función llamada suma que toma dos enteros como parámetros y devuelve un entero.
int suma(int a, int b);
// Función principal del programa. Aquí es donde comienza la ejecución del código.
int main (void) 
{   // Declaración de variables para almacenar los números ingresados por el usuario y el resultado de la suma.
    int num1, num2, resultado;
    
    // Solicita al usuario que ingrese el primer número y lo almacena en la variable num1.
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    
    // Solicita al usuario que ingrese el segundo número y lo almacena en la variable num2.
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    
    // Llamada a la función suma con los números ingresados como argumentos. 
    // El resultado se almacena en la variable resultado.
    resultado = suma(num1, num2);
    
    // Imprime el resultado de la suma en la consola.
    printf("La suma de %d y %d es: %d\n", num1, num2, resultado);
    
    return 0;
}
// Definición de la función suma. Esta función toma dos enteros como parámetros, los suma y devuelve el resultado.
int suma(int a, int b) 
{   
    // Retorna la suma de los dos números ingresados.
    return a + b;
}

// -----------------Como puntos misceláneos-------------------------//
 
// Es importante mencionar que las funciones pueden tener diferentes tipos de retorno (como void, int, float, etc.) y pueden aceptar diferentes tipos y cantidades de parámetros. Además, las funciones pueden ser recursivas, lo que significa que pueden llamarse a sí mismas para resolver problemas más complejos.
// Funciones que no devuelven valor (void), son aquellas que realizan una acción pero no retornan ningún valor al llamarlas. Por ejemplo, una función que imprime un mensaje en la pantalla podría ser de tipo void.
// Tambien pueden existir funciones que no toman valores de entrada, es decir, no requieren parámetros para ejecutarse. Estas funciones pueden realizar tareas que no dependen de datos externos, como mostrar un mensaje fijo o inicializar variables internas. 
// La funcion main es un ejemplo de una función que no toma parámetros de entrada, ya que su propósito principal es iniciar la ejecución del programa y coordinar otras funciones según sea necesario.
// En resumen, las funciones son una herramienta fundamental en la programación en C, ya que permiten estructurar el código de manera más eficiente y clara, facilitando su comprensión y mantenimiento.