#include <stdio.h>

int main () {
    for (int i=1; i <= 20; i++) {
        int numero = i %2;
        if (numero == 0) {
            printf ("%d - Es PAR\n", i);
        } else {
            printf ("%d\n", i);
        }
    }
    return 0;
}