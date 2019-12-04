#include <stdio.h>
int loop;

void preencher(int max, int vet[]) {
    for (loop = 0; loop < max; loop++) {
        printf ("Escreva um numero: ");
        scanf ("%d", &vet[loop]);
    }
}

int maior_posicao (int max, int vet[]) {
    int maior, pos;
    for (loop = 0; loop < max; loop++) {
        if (loop == 0) {
            maior = vet[loop];
            pos = loop;
        }
        if (vet[loop] > maior) {
            maior = vet[loop];
            pos = loop;
        }
    }
    printf ("O maior numero eh: %d e a posicao dele eh: %d", maior, pos);
}

main () {
    int max=5, vet[max], sum;
    preencher (max, vet);
    maior_posicao (max, vet);
}
