// Practice problem: Declare a write a function called valid_triangle that takes three real numbers representing the lengths of the three sides of a triangle as its arguments, and outputs either true or false.
// Depending on whether those three lengths are capable of forming a valid triangle. 

// Rules
// A triangle is valid if the sum of the lengths of any two sides is greater than the length of the third side.
// A triangle may only have sides with positive lengths.
#include <stdio.h>
#include <stdbool.h>

// Prototipo de la funcion para que el main sepa que existe
bool valid_triangle (double side1, double side2, double side3);
int main (void)
{   
    // Inicializacion de variables
    double side1=0;
    double side2=0;
    double side3=0;
    
    // Solicitud de datos al usuario
    printf("Enter the lengths of the three sides of a triangle: ");
    scanf("%lf %lf %lf", &side1, &side2, &side3);
    // Evaluacion del booleano retornado por la funcion
    if (valid_triangle (side1,side2,side3))
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }        
}

bool valid_triangle (double side1, double side2, double side3)
{   // Retorna verdadero solo si la suma de los lados es correcta Y los lados son positivos.
    // Tambien se podia usar dos if, uno para verificar si eran todos positivos y otro para verificar la suma de los lados, pero es mas eficiente hacerlo en una sola linea.
    return ((side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2)&& (side1>0) && (side2>0) && (side3>0));            
}