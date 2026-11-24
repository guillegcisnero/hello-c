/*Star the practice of writing get functions for each variable in a structure. 
 * This is a good practice because it allows for better encapsulation and control over how the data is accessed and modified. By using get functions, you can enforce validation, logging, or other logic when retrieving the values of the structure's variables. Additionally, it provides a clear interface for users of the structure, making the code more maintainable and easier to understand.   
*/
#include <stdio.h>
#include <string.h>

typedef struct 
    {
        int votes;
        char nombre[100];
    } candidato;

    candidato get_candidato ();

int main()
{
    candidato Candidato1 = get_candidato();
    printf("%s tiene %i votos\n", Candidato1.nombre, Candidato1.votes);
}

candidato get_candidato()
{
    candidato NuevoCandidato;
    printf("Ingrese el nombre de la persona: "); // Se utiliza fgets para leer una cadena de caracteres desde la entrada estándar, lo que permite incluir espacios en el nombre.
    fgets(NuevoCandidato.nombre, sizeof(NuevoCandidato.nombre), stdin); // stdin es un puntero a un archivo que representa la entrada estándar, y sizeof(NuevoCandidato.nombre) devuelve el tamaño del array de caracteres nombre en bytes.
    NuevoCandidato.nombre[strcspn(NuevoCandidato.nombre, "\n")] = 0; // Eliminar el salto de línea al final de la cadena
    printf("Ingrese los votos de la persona; ");
    scanf("%i", &NuevoCandidato.votes); // Se utiliza scanf para leer un número entero desde la entrada estándar y almacenarlo en la variable votes de la estructura NuevoCandidato.
    return NuevoCandidato;
}