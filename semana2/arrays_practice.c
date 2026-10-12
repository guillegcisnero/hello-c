// The exercise you are looking for is Challenge 9: Weekly Expense Calculator.
// The logic of the problem is as follows:
// Write a C program that calculates the total expense for 5 days.
// Prompt the user to enter the expense for each day.
// Store those 5 values in an array.
// Traverse the array to sum the values and print the total.
#include <stdio.h>

// Function prototype: declares the function before main
int sum_expenses(int expenses[]);

int main(void)
{
    // Array to store the expenses for 5 days
    int daily_expenses[5];

    // Loop to prompt the user for each day's expense
    for (int i = 0; i < 5; i++) 
    {
        printf("Enter the expense for day %i: ", i + 1);
        scanf("%i", &daily_expenses[i]);
    }    
    
    // Call the function passing the array, and print the result
    // Added '\n' at the end of the string for better terminal formatting
    printf("The total expense for the week is: %i\n", sum_expenses(daily_expenses));
    
    return 0;
}

// Function definition: calculates the total sum of the array elements
int sum_expenses(int expenses[])
{
    int total = 0;
    
    // Iterate through the array to calculate the accumulated sum
    for (int i = 0; i < 5; i++) 
    {
        total += expenses[i];
    }
    
    return total;
}