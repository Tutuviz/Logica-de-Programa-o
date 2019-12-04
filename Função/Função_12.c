#include <stdio.h>

main () {
    int lin, col, qtd=0;
    int max=4, vet[max][max];
    
    for (col = 0; col < max; col++) {
        for (lin = 0; lin < max; lin++) {
        printf ("Escreva um numero: ");
        scanf ("%d", &vet[lin][col]);
        }
    }

    for (col = 0; col < max; col++) {
        for (lin = 0; lin < max; lin++) {
            if (vet[lin][col]%2 == 1) {
                qtd++;
            }
        }
    }

    printf ("Existem %d numeros impares", qtd);
}
