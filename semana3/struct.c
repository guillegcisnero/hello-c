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


int main ()
{
    typedef struct 
    {
        /* data */
        int edad;
        char nombre[100];
    } Persona;

// Crear una instancia de la estructura Persona. 
// Como usamos typedef, podemos usar el nombre de la estructura directamente sin necesidad de escribir struct cada vez que queramos declarar una variable de ese tipo.
    Persona p;
    p.edad = 25;
    strcpy(p.nombre, "Juan"); // Asignar un valor a la cadena de caracteres nombre usando strcpy, ya que no se puede asignar directamente una cadena a un array de caracteres.
    printf("Nombre: %s\n", p.nombre);
    printf("Edad: %d\n", p.edad);
// En este caso la asignacion de valores a los campos de la estructura se hace de manera directa, pero tambien se puede hacer mediante inicializacion con llaves, como se muestra a continuacion:
    Persona p2 = {30, "Maria"};
    printf("Nombre: %s\n", p2.nombre);
    printf("Edad: %d\n", p2.edad);
// Tambien se puede crear un array de estructuras para almacenar información de varias personas y luego recorrer ese array para imprimir la información de cada persona.
    Persona personas[3] = {
        {20, "Pedro"},
        {22, "Ana"},
        {24, "Luis"}
    };
    for (int i = 0; i < 3; i++) {
        printf("Nombre: %s\n", personas[i].nombre);
        printf("Edad: %d\n", personas[i].edad);
    }
    Persona p3; // En este caso, se crea una instancia de la estructura Persona llamada p3, y se le asignan valores a sus campos mediante la función fgets para leer el nombre desde la entrada estándar y scanf para leer la edad.
    printf("Ingrese el nombre de la persona: "); // Se utiliza fgets para leer una cadena de caracteres desde la entrada estándar, lo que permite incluir espacios en el nombre.
    fgets(p3.nombre, sizeof(p3.nombre), stdin); // stdin es un puntero a un archivo que representa la entrada estándar, y sizeof(p3.nombre) devuelve el tamaño del array de caracteres nombre en bytes.
    p3.nombre[strcspn(p3.nombre, "\n")] = 0; // Eliminar el salto de línea al final de la cadena
    printf("Ingrese la edad de la persona; ");
    scanf("%d", &p3.edad);
    printf("Nombre: %s y edad: %d\n", p3.nombre, p3.edad);
    
    return 0;
}