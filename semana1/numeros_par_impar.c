#include <stdio.h>

int main () {
    int limite;
    printf (" Hasta que numero contamos? ");
    scanf ("%d", &limite);
    for (int i=1; i <= limite; i++) {
        if (i % 2 == 0) {
            printf ("%d - Es PAR\n", i);
        } else {
            printf ("%d\n", i);
        }
    }
    return 0;
}