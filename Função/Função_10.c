#include <stdio.h>

main () {
    int lin, col;
    int max=4, vet[max][max];
    float sum=0, qtd=0, med=0;
    
    for (col = 0; col < max; col++) {
        for (lin = 0; lin < max; lin++) {
        printf ("Escreva um numero: ");
        scanf ("%d", &vet[lin][col]);
        }
    }

    for (col = 0; col < max; col++) {
        for (lin = 0; lin < max; lin++) {
            if (col == lin)
            {
                qtd++;
                sum=sum+vet[lin][col];
            }
        }
    }
    med = sum/qtd;
    printf ("Existem: %.0f numeros \nA soma dele eh: %.0f \nA media entre eles eh: %.2f", qtd, sum, med);
}
