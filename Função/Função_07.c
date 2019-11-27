#include <stdio.h>

void fill (int vet[], int max) {
    int loop;
    for (loop = 0; loop < max; loop++) {
        printf ("Digite um valor: ");
        scanf ("%d",&vet[loop]);
    }
}

int less_qtd (int vet[], int max) {
    int loop, qtd=0;
    printf ("\nMenores que 10:\n");
    for (loop = 0; loop < max; loop++) {
        if (vet[loop] < 10) {
            qtd++;
        }
    }
    return qtd;
}

int sum (int vet[], int max) {
    int loop, sum=0;
    for (loop = 0; loop < max; loop++) {
        sum = sum + vet [loop];
    }
    return sum;
}

float med (float sum, float max) {
    int loop;
    float med;
    printf ("\nMedia:\n");
    med = sum / max;
    return med;
}

main() {
    int max=6, vet[max];

    fill (vet, max);

    printf ("%d", less_qtd (vet, max));

	printf ("\nSoma:\n");
    printf ("%d", sum (vet, max));

    printf ("%.1f", med (sum (vet, max), max));
}
