
#include <stdio.h>
#include <string.h>

int main (void)
{
    //Declaramos un array de caracteres
    char imput[100];
    //Pedimos al usuario que ingrese una palabra
    printf("Dime una palabra? \n");
    scanf("%s", imput);
    //Imprimimos cada carácter del array, utilizando un bucle for y la función strlen para determinar la longitud de la cadena
    for (int i=0, n = strlen (imput); i < n; i++)
    printf("%c", imput[i]);
    printf("\n");
}
