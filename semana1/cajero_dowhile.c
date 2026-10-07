#include <stdio.h>

int main(void)
{
    // Inicialización de las variables de estado de la cuenta
    int saldo = 1000;
    int extraccion = 0;
    // Ciclo principal: El cajero opera iterativamente mientras el usuario tenga dinero
    while (saldo > 0) 
    {
        // Bucle de validación: Solicita el retiro y atrapa al usuario si ingresa un monto negativo o cero
        do
        {
        printf ("Cuanto dinero desea retirar?: ");
        scanf ("%d", &extraccion);                
        }    
        while (extraccion <= 0);

        // Lógica de transacción: Verifica si el monto validado no supera el saldo disponible
        if (extraccion <= saldo) 
        {            
            // Operación exitosa: descontamos el dinero del saldo y mostramos el remanente
            saldo -= extraccion;
            printf ("Su saldo actual es: %d\n", saldo);                        
        }  
        else 
        {
            // Operación rechazada: evitamos el sobregiro sin alterar la cuenta
            printf ("Fondos insuficientes\n");
        }
    }
    
    // Mensajes de despedida que se ejecutan únicamente al escapar del bucle principal (saldo == 0)
    printf ("Te has quedado sin fondos\n");
    printf ("Gracias por usar cajeros Gombank");

    // Retorno de estado exitoso al sistema operativo
    return 0;
}