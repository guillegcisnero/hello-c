/*Reto 10: Invertir un array "in-place" (Sin crear otro array)
 *Tienes un array con 6 números enteros, por ejemplo: {10, 20, 30, 40, 50, 60}. 
 *Tu objetivo es dar vuelta los valores dentro del mismo array para que al final quede {60, 50, 40, 30, 20, 10}, y luego imprimirlo por pantalla.
 *La restricción: Está prohibido crear un segundo array y está prohibido simplemente "imprimirlo de atrás para adelante" en el printf. 
 *Los datos deben cambiar realmente de casillero en la memoria.
*/
#include <stdio.h>

int main ()
{
    // 1. Declaramos e inicializamos el array con 6 espacios (índices del 0 al 5)[cite: 6, 7]
    int numbers[6] = {10, 20, 30, 40, 50, 60};
    
    // 2. Bucle de inversión: solo recorre hasta la mitad (índices 0, 1 y 2)
    // Si siguiera hasta el 5, volvería a invertir los números dejándolos como al principio.
    for (int i = 0; i <= 2; i++)
    {
        // Variable auxiliar ("vaso vacío") que vive solo dentro de cada vuelta del bucle
        int temp = 0;

        // PASO A: Rescatamos el valor de la izquierda en 'temp' antes de pisarlo
        temp = numbers[i];        

        // PASO B: Copiamos el valor del extremo derecho (5 - i) en el casillero izquierdo (i)
        // Cuando i=0 usa numbers[5]; cuando i=1 usa numbers[4]; cuando i=2 usa numbers[3]
        numbers[i] = numbers[5 - i];

        // PASO C: Guardamos en el extremo derecho el valor original que rescatamos en 'temp'
        numbers[5 - i] = temp;    
    }

    // 3. Bucle de lectura: recorre todo el array (0 al 5) para mostrar cómo quedó en memoria
    for (int i = 0; i < 6; i++) {
        printf("Elemento %d: %d\n", i, numbers[i]);
    }
}