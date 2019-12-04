#include <stdio.h>
int loop;

void preencher(int max, int vet[]) {
    for (loop = 0; loop < max; loop++) {
        printf ("Digite um numero: ");
        scanf ("%d",&vet[loop]);
    }
}

void preencherb (int max, int vet[]){
    int vetb[max], reverse;
    reverse = max - 1;
    for (loop = 0; loop < max; loop++) {
        vetb[loop]=vet[reverse];
        reverse--;
    }
    for (loop = 0; loop < max; loop++) {
        printf("[%d]\t",vet[loop]);
    }
    printf ("\n");
    for (loop = 0; loop < max; loop++) {
        printf("[%d]\t",vetb[loop]);
    }
}

main() {
    int loop, max=10;
    int vet[max];

    preencher (max, vet);
    preencherb (max, vet);
}