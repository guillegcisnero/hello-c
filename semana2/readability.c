/*
 * Problem Set 2: Readability (Standard C Implementation)
 * 
 * Description:
 * This program calculates the approximate grade level needed to comprehend 
 * a given text using the Coleman-Liau index formula:
 * index = 0.0588 * L - 0.296 * S - 15.8
 * 
 * Where:
 * - L is the average number of letters per 100 words in the text.
 * - S is the average number of sentences per 100 words in the text.
 * 
 * Note: This implementation uses standard C libraries (<stdio.h>, <string.h>, 
 * <ctype.h>, <math.h>) instead of the <cs50.h> library, handling strings 
 * manually as character arrays and reading input via fgets().
 */

#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

// Function prototypes for counting letters, words, and sentences
int count_letter(char text[]);
int count_words(char text[]);
int count_sentences(char text[]);

int main(void)
{
    // Allocate a character array (buffer) to store the user's input text
    char text[400];
    
    // Prompt the user for text and read the entire line (including spaces) from standard input
    printf("Input your text: ");
    fgets(text, sizeof(text), stdin);
    
    // Call helper functions to count letters, words, and sentences
    int letters = count_letter(text);
    int words = count_words(text);
    int sentences = count_sentences(text);
    
    // Print intermediate counts for verification
    printf("Letters: %i\n", letters);
    printf("Words: %i\n", words);
    printf("Sentences: %i\n", sentences);

    // Compute the Coleman-Liau index
    // Cast 'letters' and 'sentences' to float to prevent integer division truncation
    float L = ((float) letters / words) * 100;
    float S = ((float) sentences / words) * 100;
    float index = ((L * 0.0588) - (S * 0.296) - 15.8);
    
    // Round the resulting index to the nearest integer to determine the grade level
    int grade = round(index);
    
    // Output the final reading grade level based on CS50 specifications
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}

// Counts the number of alphabetical characters in the text
int count_letter(char text[])
{
    int letters = 0;
    // Iterate through each character in the array until the end of the string
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        // Check if the current character is an alphabetical letter (A-Z or a-z)
        if (isalpha(text[i]))
            letters++;
    }
    return letters;
}

// Counts the number of words in the text based on whitespace delimiters
int count_words(char text[])
{
    int words = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        // isspace() counts standard spaces (' ') as well as the trailing newline ('\n') 
        // captured by fgets(), which automatically accounts for the final word in the text
        if (isspace(text[i]))
            words++;
    }
    return words;
}

// Counts the number of sentences based on ending punctuation marks
int count_sentences(char text[])
{
    int sentences = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        // Any period, exclamation mark, or question mark indicates the end of a sentence
        if ((text[i] == '.') || (text[i] == '!') || (text[i] == '?'))
        {
            sentences++;
        }
    }
    return sentences;
}