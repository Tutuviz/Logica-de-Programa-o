#include <stdio.h>

main() {
    int qtd=6, my, life, hate[qtd][qtd];
    for ( my = 0; my < qtd; my++) {
        for ( life = 0; life < qtd; life++) {
            printf ("Digite um numero: ");
            scanf ("%d", &hate[my][life]);
        }
    }
    for ( my = 0; my < qtd; my++) {
        for ( life = 0; life < qtd; life++) {
            if (my == life) {
                printf ("[%d]\t", hate[my][life]);
            }
        }
    }
}
