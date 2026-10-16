/* Reto 1: El mapa básico.
 Crea una variable int numero = 50;. Luego, crea un puntero llamado p y guárdale la dirección de numero. 
 Usa printf para imprimir tres cosas: el valor de numero, la dirección de memoria de numero (usando %p y &numero), y lo que está guardado dentro de p (usando %p y p). 
 Observa cómo las dos últimas son idénticas.

 Reto 2: Control remoto (Modificación indirecta)
 Usando las variables del Reto 1, intenta cambiar el valor del numero (por ejemplo, a 99) sin tocar directamente la variable numero. 
 Debes usar tu puntero p y la "llave maestra" (*) para lograrlo. 
 Imprime numero al final para comprobar si el cambio funcionó.
*/
#include <stdio.h>

int main ()
{
    int numero = 50;
    int * p = &numero;
    *p = 99;


    printf("Valor de numero: %i\n", numero);
    printf(" Lo que guarda p: %p\n", p);
    printf("Direccion de memoria de numero: %p\n", &numero);

}