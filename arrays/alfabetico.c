#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100];
    printf("Text: ");
    scanf("%s", s);
    for (int i= 0, n = strlen(s); i < n -1; i++)
    {
        if (s[i] > s [i+1])
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
}