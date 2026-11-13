/* 
Teoria de structs en C. 
Las estructuras (structs) son un tipo de dato compuesto que permite agrupar diferentes tipos de datos bajo un mismo nombre. 
Esto es útil para representar entidades más complejas, como una persona, un coche, etc. 
También se pueden anidar estructuras dentro de otras estructuras, lo que permite crear jerarquías de datos más complejas.
Respecto a la inicialización de structs, se puede hacer de varias maneras. 
Una forma es mediante la asignación directa de valores a cada campo de la estructura, como se muestra en el ejemplo. 
Otra forma es mediante la inicialización con llaves, donde se pueden especificar los valores de los campos en el orden en que fueron declarados.
Tambien mediante bucles y funciones, se pueden crear y manipular estructuras de manera más dinámica, permitiendo la creación de arrays de estructuras y la manipulación de sus campos a través de funciones.
Por ejemplo, se puede crear un array de estructuras para almacenar información de varias personas y luego recorrer ese array para imprimir la información de cada persona.

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main ()
{
    typedef struct 
    {
        /* data */
        int edad;
        char nombre[100];
    } Persona;


    Persona p;

    
    p.edad = 25;
    strcpy(p.nombre, "Juan");
    printf("Nombre: %s\n", p.nombre);
    printf("Edad: %d\n", p.edad);


    return 0;
}