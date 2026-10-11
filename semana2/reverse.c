#include <stdio.h>
#include <string.h>

int main (void)
{   //Pedimos al usuario que ingrese una palabra
    char text[100];
    printf("Input: ");
    scanf("%s", text);
    //Luego imprimimos cada carácter del array en orden inverso, utilizando un bucle for y la función strlen para determinar la longitud de la cadena
    for (int i= strlen(text)-1; i >= 0 ; i--)
    printf("%c", text[i]);
    printf("\n");

}
