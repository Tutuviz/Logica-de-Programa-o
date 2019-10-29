#include <stdio.h>

main () {
    int vet[20], loop, ind;
    for (loop = 0; loop < 20; loop++) {
        printf ("Digite um valor: ");
        scanf ("%d",&vet[loop]);
        if (loop == 0) {
            ind = vet[loop];
        }  
        if (vet[loop] > ind) {
            ind = loop;
        }
    }
    printf ("O indice do maior elemento eh: %d", ind);
}
