#include <stdio.h>

main () {
    int vet[10], loop;
    for (loop = 0; loop < 10; loop++) {
        printf ("Digite um valor: ");
        scanf ("%d",&vet[loop]);
    }
    for (loop = 0; loop < 10; loop++) {
        if (vet[loop] % 2 == 0) {
            printf ("Par: %d\n",vet[loop]);
        }
        else {
            printf ("Impar: %d\n",vet[loop]);
        }
    }
}
