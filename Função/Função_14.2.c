#include <stdio.h>

main() {
    int loop, max=4;
    int vet[max], busca, achar=0;
    for (loop = 0; loop < max; loop++) {
        printf ("Digite um numero: ");
        scanf ("%d",&vet[loop]);
    }
    
    for (loop = 0; loop < max; loop++) {
        printf ("[%d]\t",vet[loop]);
    }
    
    printf ("\nDigite um  para buscar: ");
    scanf ("%d",&busca);

    for (loop = 0; loop < max; loop++) {
        if (busca==vet[loop]) {
            printf ("O numero esta na posicao %d", loop);
            achar = 1;
        }
    }

    if (achar==0) {
        printf ("O numero nao existe");
    }
    
}
