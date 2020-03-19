#include <stdio.h>

main () {
    int loop, num;
    loop = 1;
    while (loop <= 20) {
        printf ("Digite um numero: ");
        scanf ("%d", &num);
        if (num%2 == 0) {
            printf ("O numero eh par\n\n");
        }
        else {
            printf ("O numero eh impar\n\n");
        }
        loop = loop + 1;
    }
    
}
