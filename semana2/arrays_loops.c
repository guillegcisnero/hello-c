/*el Reto 11: Busqueda y filtrado de duplicados en un array.
 *Dado un array como int numbers[7] = {4, 8, 4, 2, 8, 4, 9};
 *Detectar qué números están repetidos e imprimir el aviso una sola vez por cada número repetido.
*/
#include <stdio.h>

int main ()
{
    // 1. EL ARRAY ORIGINAL
    // Declaramos e inicializamos nuestro array con 7 espacios.
    int numbers[7] = {4, 8, 4, 2, 8, 4, 9};
    
    // 2. BUCLE PRINCIPAL: El "Dedo Quieto" (i)
    // Se para en cada casillero del array, de izquierda a derecha, para usarlo como referencia.
    for (int i = 0; i < 7; i++) 
    {
        // LA BANDERA (Flag)
        // Se reinicia a 0 (apagada) en cada vuelta del bucle 'i'. 
        // Si al mirar atrás descubrimos que el número ya apareció, la cambiaremos a 1.
        int ya_visto = 0; 

        // 3. PRIMER BUCLE INTERNO: El "Guardián del Pasado" (k)
        // Empieza en 0 y revisa todos los casilleros anteriores a nuestra posición actual 'i'.
        for (int k = 0; k < i; k++)
        {
            // Comparamos el casillero actual 'i' con los casilleros anteriores 'k'
            if (numbers[i] == numbers[k]) 
            {
                ya_visto = 1; // ¡Alarma! Este número ya fue revisado y reportado antes.
                break;        // Cortamos el bucle 'k' al instante porque no hace falta seguir mirando atrás.
            }
        }

        // 4. FILTRO DE CONTINUACIÓN
        // Si la bandera sigue en 0, significa que el número es nuevo y vale la pena buscar sus duplicados.
        // Si está en 1, el programa ignora este bloque y salta directamente a la siguiente 'i'.
        if (ya_visto == 0)
        {
            // 5. SEGUNDO BUCLE INTERNO: El "Explorador del Futuro" (j)
            // Arranca siempre un paso adelante de donde estamos parados (i + 1) y revisa hasta el final.
            for (int j = i + 1; j < 7; j++)
            {
                // Buscamos si hay alguna coincidencia hacia adelante
                if (numbers[i] == numbers[j]) 
                {
                    // Encontramos el primer duplicado: imprimimos el aviso.
                    printf("El número %d está repetido\n", numbers[i]);
                    
                    // Cortamos el bucle 'j' de inmediato. 
                    // Esto evita que el mensaje se imprima más veces si el número aparece por tercera o cuarta vez.
                    break; 
                }
            }
        }            
    }        
}