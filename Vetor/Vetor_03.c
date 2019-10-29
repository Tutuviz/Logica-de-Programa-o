#include <stdio.h>

main () {
    int vet[20], loop;
    for (loop = 0; loop < 20; loop++) {
        printf ("Digite um valor: ");
        scanf ("%d",&vet[loop]);
    }
    printf ("Lugar do pares:\n");
    for (loop = 0; loop < 20; loop++) {
        if (vet[loop] % 2 == 0) {
            printf ("%d\n",loop);
        }
    }
}
