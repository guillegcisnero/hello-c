/* ------------Punteros en C----------------
 *Hasta ahora, cuando creabas una variable (ej. int peso = 80;), imaginabas un casillero con el número 80 adentro. 
 *Pero para la computadora, ese casillero está en una ubicación física exacta dentro del inmenso depósito de tu memoria RAM (por ejemplo, en la dirección 0x7FFE9A).
 *Un puntero no es más que una variable especial cuyo único trabajo es guardar direcciones de memoria, no valores normales. 
 *Funciona como un papel donde anotas dónde vive alguien, en lugar de ser la persona en sí.   
 *Para manejarlos, C te da dos herramientas fundamentales: 
 *El buscador de direcciones (& - Ampersand): Significa "la dirección de". Si pones &peso, la computadora no te da el 80, te da la coordenada de memoria donde está guardado ese 80.
 *La llave maestra (* - Asterisco): Tiene dos usos.
 *1) Para declarar: Cuando lo pones al crear una variable (ej. int *puntero;), le avisas a C que esa variable va a guardar una dirección de memoria de un entero, no un entero normal. 
 *2) Para interactuar (Desreferenciar): Cuando lo pones delante de un puntero ya creado (ej. *puntero), significa "ve a la dirección que tienes anotada y dame (o modifica) lo que hay adentro de ese casillero".
 *La conexión con los Strings: En C puro, la palabra string es en realidad un disfraz para char * (un puntero a un carácter). 
 *Cuando creas un texto, la computadora lo guarda en casilleros contiguos y te entrega un puntero que "apunta" únicamente a la dirección de la primera letra.
    *Por eso, cuando pasas un string a una función, en realidad estás pasando un puntero a la primera letra del texto.
*/




  #include <stdio.h>

 int main (void)
 {
     // Declaramos un entero normal y un puntero a entero
     int peso = 80;
     int *puntero = &peso; // Guardamos la dirección de peso en el puntero

     // Mostramos el valor de peso y la dirección donde está guardado
     printf("Valor de peso: %d\n", peso);
     printf("Dirección de peso: %p\n", (void*)&peso);

     // Mostramos el valor del puntero (la dirección que guarda) y lo que hay en esa dirección
     printf("Valor del puntero: %p\n", (void*)puntero);
     printf("Valor apuntado por el puntero: %d\n", *puntero);

     // Modificamos el valor de peso usando el puntero
     *puntero = 90;
     printf("Nuevo valor de peso después de modificarlo a través del puntero: %d\n", peso);

     return 0;
 }
