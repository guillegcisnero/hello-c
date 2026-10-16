/* Reto 3: Hackeando el Array
 Declara un array simple: int edades[3] = {20, 30, 40};. Crea un puntero int *p_edades = edades;. 
 (Nota: en los arrays no hace falta poner & porque el nombre del array ya es una dirección de memoria por defecto).
 Intenta imprimir el número 20 usando solo tu puntero p_edades. 
 Luego, ¿cómo usarías ese mismo puntero (sumándole algo) para imprimir el número 30 sin usar los corchetes []?
*/
#include <stdio.h>

int main ()
{   // Primero declaramos el array y el puntero.
    int edades[3] = {20, 30, 40};
    int *p_edades = edades;
    // Ahora imprimimos el primer elemento usando el puntero.
    printf("%d\n", *p_edades);
    // Por ultimo imprimimos el segundo elemento sumando 1 al puntero. El puntero apunta a la dirección de memoria del primer elemento, y al sumarle 1, apunta a la dirección del segundo elemento.
    printf("%d\n", *(p_edades + 1));
    // Tambien podemos usar un bucle para recorrer el array usando el puntero.
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", *(p_edades + i));
    }
    
}