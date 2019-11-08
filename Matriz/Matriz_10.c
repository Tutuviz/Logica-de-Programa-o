#include <stdio.h>

main() {
    int qtd=2, my, life, hate[qtd][qtd], cord;
    for (my = 0; my < qtd; my++) {
        for (life = 0; life < qtd; life++) {
            printf ("Digite um numero: ");
            scanf ("%d", &hate[my][life]);
        }
    }
    for (my = 0; my < qtd; my++) {
        for (life = 0; life < qtd; life++) {
        	cord = my + life;
            if (cord%2==0) {
                printf ("%d\t", hate[my][life]);
            }
        }
    }
}
