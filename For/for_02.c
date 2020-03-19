#include <stdio.h>

main () {
    int loop;
    for (loop = 0; loop < 20; loop++) {
        printf ("Digite um numero: ");
        scanf ("%d", &num);
        if (num%2 == 0) {
            printf ("O numero eh par\n\n");
        }
        else {
            printf ("O numero eh impar\n\n");
        }
    }
}
