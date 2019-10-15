#include <stdio.h>

main () {
    int loop, num;
    loop = 1;
    while (loop <= 20) {
        printf ("Digite um numero: ");
        scanf ("%d", &num);
        if (num == 0) {
            printf ("O numero eh 0\n\n");
        }
        else {
            if (num > 0) {
                printf ("O numero eh positivo\n\n");
            }
            else {
                printf ("O numero eh negativo\n\n");
            }
            
        }
        loop = loop + 1;
    }
    
}
