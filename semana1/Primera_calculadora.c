#include <stdio.h>


int sumar (int numero1, int numero2);
int main (void)
{
      	int numero1; 
printf ("¿Cual es tu primero numero?: ");
scanf ("%i", &numero1);

	int numero2;
    printf ("¿Cual es tu segundo numero?: ");
    scanf ("%i", &numero2);

int total = sumar (numero1, numero2);
	printf ("El resultado de sumar esos números es:%i\n", total);

return 0;
}

int sumar (int numero1, int  numero2)
{
	int resultado = (numero1 + numero2);
	return resultado;
}
