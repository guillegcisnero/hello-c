#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char str[100];
    printf("Before: ");
    fgets(str, sizeof(str), stdin);
    printf ("After:  ");
    for (int i = 0,n = strlen (str); i< n; i++)
    {
        printf ("%c", toupper (str [i]));    
    }
    printf("\n");    
}