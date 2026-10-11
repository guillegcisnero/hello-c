#include <ctype.h>
#include <stdio.h>
#include <string.h>

int calcular_puntaje(char texto[]);
int puntajes[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int main(void)
{
    // Prompt the user for two words
    char palabra1[100];
    printf("Player 1: ");
    scanf("%s", palabra1);
    char palabra2[100];
    printf("Player 2: ");
    scanf("%s", palabra2);
    // Compute the score of each word
    int score_1 = calcular_puntaje(palabra1);
    int score_2 = calcular_puntaje(palabra2);
    // Print the winner
    if (score_1 > score_2)
    {
        printf("Player 1 wins! \n");
    }
    else if (score_1 < score_2)
    {
        printf("Player 2 wins! \n");
    }
    else
    {
        printf("tie! \n");
    }
}

int calcular_puntaje(char texto[])
{
    int scoring = 0;
    for (int i = 0, n = strlen(texto); i < n; i++)
    {
        if (texto[i] >= 'a' && texto[i] <= 'z')
        {
            scoring += puntajes[texto[i] - 'a'];
        }
        else if (texto[i] >= 'A' && texto[i] <= 'Z')
        {
            scoring += puntajes[texto[i] - 'A'];
        }
    }
    return scoring;
}
