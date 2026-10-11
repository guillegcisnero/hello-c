#include <stdio.h>

// Este programa imprime la primera letra de cada argumento pasado por línea de comandos
int main(int argc, char *argv[])
{   // Verificamos si se han pasado suficientes argumentos
    if (argc < 2)
    {   // Si no se han pasado suficientes argumentos, mostramos un mensaje de uso y salimos con un código de error
        printf("Usage: ./return First Last\n");
        return 1;
    }
    // Iteramos sobre los argumentos y imprimimos la primera letra de cada uno
    for (int i=1; i<argc; i++)
    {   // Imprimimos la primera letra del argumento actual
        printf("%c", argv[i][0]);

    }
    printf("\n");
}
