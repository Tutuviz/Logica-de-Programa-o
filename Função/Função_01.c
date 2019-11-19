#include <stdio.h>

void fill (int vet[], int max) {
    int loop;
    for (loop = 0; loop < max; loop++) {
        printf ("Digite um valor: ");
        scanf ("%d",&vet[loop]);
    }
}

void print_odd (int vet[], int max) {
    int loop;
    printf ("\nImpares:\n");
    for (loop = 0; loop < max; loop++) {
        if (vet[loop]%2 == 1) {
            printf ("[%d]\t", vet[loop]);
        }
    }
}

void print_even (int vet[], int max) {
    int loop;
    printf ("\nPares:\n");
    for (loop = 0; loop < max; loop++) {
        if (vet[loop]%2 == 0) {
            printf ("[%d]\t", vet[loop]);
        }
    }
}

main() {
    int max=10,vet[max];

    fill (vet, max);
    
    print_even (vet, max);

    print_odd (vet, max);
}
