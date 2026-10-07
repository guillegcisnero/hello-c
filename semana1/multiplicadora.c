#include <stdio.h>

int main () {
    int a = 0;
        // Ask the user for a number
        printf("Enter one number: ");
        scanf("%d", &a);
        printf("----The table of %d ---------\n", a);
        // Loop to print the multiplication table
        for (int i=1; i<=10; i++)
        {
            // Calculate the product of the number and the current iteration
            int product = a * i; 
            // Print the result in a formatted way           
            printf("%d x %d is: %d\n", a, i, product);
        }
    return 0;
}


