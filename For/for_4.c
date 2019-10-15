#include <stdio.h>

main () {
    int loop, num;
    for (loop = 0; loop < 20; loop++) {
        printf ("Digite um numero: ");
        scanf ("%d", &num);
        if (num == 0) {
            printf ("O numero eh zero\n\n");
        }
        else {
            if (num > 0) {
                printf ("O numero eh positivo\n\n");
            }
            else {
                printf ("O numero eh negativo\n\n");
            }
        }
    }
}
