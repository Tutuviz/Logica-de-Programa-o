#include <stdio.h>

main() {
    int qtd=2, line, col, mat[qtd][qtd], main_sum=0, sub_sum=0;
    for (line = 0; line < qtd; line++) {
        for (col = 0; col < qtd; col++) {
            printf ("Digite uns valores ae: ");
            scanf ("%d", &mat[line][col]);
        }
    }

    for (line = 0; line < qtd; line++) {
        for (col = 0; col < qtd; col++) {
            if (line == col){
                main_sum = main_sum + mat[line][col];
            }
        }
    }

    for (line = 0; line < qtd; line++) {
        for (col = 0; col < qtd; col++) {
            if (line + col == 3){
                sub_sum = sub_sum + mat[line][col];
            }
        }
    }

    if (main_sum == sub_sum) {
        printf ("A soma das diagonais sao iguais");
    }
    else {
        printf ("A soma das diagonais sao desiguais");
    }
    

 }