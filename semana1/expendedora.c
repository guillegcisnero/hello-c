//Reto 5 (La Máquina Expendedora): Imagina que una máquina vende un producto que cuesta exactamente $50. 
//El programa debe pedirle al usuario que ingrese dinero usando un bucle. 
//Cada vez que el usuario ingresa dinero, se acumula. 
//El bucle debe detenerse ÚNICAMENTE cuando el dinero acumulado sea igual o mayor a $50.
//Al final, debe imprimir "Producto entregado" y decirle al usuario cuánto es su vuelto (si acumuló $50, el vuelto es $0, si acumuló $60, el vuelto es $10).

#include <stdio.h>

int main () {
    int dinero_acumulado = 0;
    int dinero_ingresado = 0;
    int precio_producto = 50;
    int vuelto = 0;

    // 1. El bucle principal: sigue cobrando mientras falte dinero
    while (dinero_acumulado < precio_producto) {
        
        // 2. Bucle de seguridad: obliga a ingresar dinero real (positivo)
        do {
            printf("Ingrese dinero: ");
            scanf("%d", &dinero_ingresado);
        } while (dinero_ingresado <= 0);
        
        // 3. Sumamos el dinero validado al total
        dinero_acumulado += dinero_ingresado;        
    }
    
    // 4. Fuera del bucle: calculamos el vuelto y entregamos
    vuelto = dinero_acumulado - precio_producto;
    
    printf("Producto entregado\n");
    printf("Su vuelto es: %d\n", vuelto);
    
    // 5. Botón de apagado exitoso
    return 0;
}