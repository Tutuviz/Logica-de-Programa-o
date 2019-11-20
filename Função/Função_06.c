#include <stdio.h>

void fill (int vet[], int max) {
    int loop;
    for (loop = 0; loop < max; loop++) {
        printf ("Digite um valor: ");
        scanf ("%d",&vet[loop]);
    }
}

void print_positive_qtd (int vet[], int max) {
    int loop, qtd=0;
    printf ("\nPositivos:\n");
    for (loop = 0; loop < max; loop++) {
        if (vet[loop] > 0) {
            qtd++;
        }
    }
    printf ("%d", qtd);
}

void print_odd_qtd (int vet[], int max) {
    int loop, qtd=0;
    printf ("\nImpares:\n");
    for (loop = 0; loop < max; loop++) {
        if (vet[loop]%2 == 1) {
            qtd++;
        }
    }
    printf ("%d", qtd);
}

main() {
    int max=5, vet[max];

    fill (vet, max);

    print_positive_qtd (vet, max);

    print_odd_qtd (vet, max);
}
