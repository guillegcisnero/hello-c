#include <stdio.h>

int main() 
{
int precio_entrada = 0;
int edad = 0;
printf("Ingresa tu edad: ");
scanf("%d", &edad);
if (edad < 0) 
{
    printf ("Edad no válida. Por favor ingresa un número positivo.\n");
} 
else if (edad <= 12) 
{
    precio_entrada = 5;
    printf("El precio de la entrada es: $%d\n", precio_entrada);
} 
else if (edad <= 64)
{
    precio_entrada = 10;
    printf("El precio de la entrada es: $%d\n", precio_entrada);
}
else
{
    precio_entrada = 7;
    printf("El precio de la entrada es: $%d\n", precio_entrada);
}
return 0;
}