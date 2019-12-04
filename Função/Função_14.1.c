#include <stdio.h>
int loop;
void preencher(int max, int vet[]) {
    for (loop = 0; loop < max; loop++) {
        printf ("Digite um numero: ");
        scanf ("%d",&vet[loop]);
    }
}

void print (int max, int vet[]) {
    for (loop = 0; loop < max; loop++) {
        printf ("[%d]\t",vet[loop]);
    }
}

void buscador (int max, int vet[]) {
    int achar=0, busca;
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

main() {
    int loop, max=4;
    int vet[max];

    preencher (max, vet);

    print (max, vet);

    buscador (max, vet);
    
}