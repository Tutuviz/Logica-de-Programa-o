#include <stdio.h>

void fill (int vet[], int max) {
    int loop;
    for (loop = 0; loop < max; loop++) {
        printf ("Digite um valor: ");
        scanf ("%d",&vet[loop]);
    }
}

int odd_sum (int vet[], int max) {
    int loop, sum=0;
    for (loop = 0; loop < max; loop++) {
        if (vet[loop]%2 == 1) {
            sum=sum+vet[loop];
        }
    }
    return sum;
}

main() {
    int max=6, vet[max];

    fill (vet, max);
    
    printf ("\nSoma dos Impares: %d", odd_sum (vet, max));
}
