#include <stdio.h>

void fill (int vet[], int max) {
    int loop;
    for (loop = 0; loop < max; loop++) {
        printf ("Digite um valor: ");
        scanf ("%d",&vet[loop]);
    }
}

int even_position (int vet[], int max) {
    int loop, qtd=0, sla=0, even[sla];
    printf ("\nPositions: \n");
    for (loop = 0; loop < max; loop++) {
        if (vet[loop]%2 == 0) {
            printf ("[%d]\t", loop);
        }
    }
    return even[sla];
}

main() {
    int max=20, vet[max];

    fill (vet, max);

    even_position (vet, max);
}
