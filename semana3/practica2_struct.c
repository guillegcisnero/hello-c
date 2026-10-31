/* Struct and Functions Exercise.
Create your own get_candidate function that prompts the user to input attributes for a candidate.
You may rely on get_string, get_float, etc., and your function should return a candidate.

A struct to represent a candidate in an election that minimally includes:
 -The candidate is name (as a string)
 -The candidate is number of votes (as an integer)
Add attributes to a candidate and print those out to the user.

./struct
Alice has a 5 votes.
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
    {
        int votes;
        char name [100];
    } candidate;

int main (void)
{
    candidate president;

    president = (candidate){0};
    president.votes = 5;
    strcpy(president.name, "Alice");
    printf("%s has a %d votes.\n", president.name, president.votes);

    return 0;
}
