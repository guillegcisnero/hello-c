#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    // Reemplazamos get_string para no usar CS50.h
    // 1. Reservamos la variable nombre con un espacio de 50
    // 2. Usas fgets (dónde guardarlo), sizeof (tamaño máximo), stdin (de dónde leerlo)

    char nombre [50];
    printf ("Cual es tu nombre? ");
    fgets (nombre, sizeof (nombre), stdin);
    
    // 3. Limpias la palabra mágicamente en una sola línea
    nombre [strcspn (nombre, "\r\n")] = '\0';
    // 4. Mides la palabra real y limpia    
    printf ("%i\n", strlen (nombre));

}