#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


bool only_digits(char *s);
char rotate(char c, int n);
int main(int argc, char *argv[])
{
    // Make sure program was run with just one command-line argument.
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    // Make sure every character in argv[1] is a digit.
    bool verify = only_digits(argv[1]);
    if (verify == false)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    // Convert argv[1] from a `string` to an `int`
    int key = atoi(argv[1]);
    // Prompt user for plaintext
    char plaintext[100];
    printf("Plaintext: ");
    fgets(plaintext, sizeof(plaintext), stdin);
    // Remove newline character from input (otra forma de hacerlo es usando plaintext[strlen(plaintext) - 1] = '\0';)
    plaintext[strcspn(plaintext, "\n")] = '\0'; 
    // Print encabezado
    printf("Ciphertext:");
    // For each character in the plaintext:
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        // Call the function rotate
        char ciphertext = rotate(plaintext[i], key);
        printf("%c", ciphertext);
    }
    printf("\n");
}
// Funcion para verificar que argv sean digitos
bool only_digits(char *s)
{
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (isdigit(s[i]) == false)
        {
            return false;
        }
    }
    return true;
}
char rotate(char c, int n)
{
    char result = 0;
    // Si son minusculas
    if (islower(c))
    {
        result = ((c - 'a') + n) % 26 + 'a';
    }
    // Si son mayusculas
    else if (isupper(c))
    {
        result = ((c - 'A') + n) % 26 + 'A';
    }
    // Si no lo son, debe devolver los espacios, comas y símbolos sin modificar
    else
    {
        return c;
    }
    return result;
}
