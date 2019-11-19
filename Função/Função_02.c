#include <stdio.h>

void fill (int vet[], int max) {
    int loop;
    for (loop = 0; loop < max; loop++) {
        printf ("Digite um valor: ");
        scanf ("%d",&vet[loop]);
    }
}

int even_check (int vet[], int max) {
    int loop, qtd=0;
    for (loop = 0; loop < max; loop++) {
        if (vet[loop]%2 == 0) {
            qtd++;	
        }
    }
    return qtd;
}

main() {
    int max=10,vet[max];

    fill (vet, max);
    
    printf ("\nNumero de pares: %d", even_check (vet, max));
}
