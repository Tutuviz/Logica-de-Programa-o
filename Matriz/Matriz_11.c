#include <stdio.h>

main() {
    int qtd=2, my, life, hate[qtd][qtd], love[qtd][qtd], the, death, tuberculo=0, batata=0, PAR[batata], IMPAR[tuberculo];

    //Declaracao do vetor A
    for (my = 0; my < qtd; my++) {
        for (life = 0; life < qtd; life++) {
            printf ("Digite um numero: ");
            scanf ("%d", &hate[my][life]);
        }
    }

    //Declaracao do matriz B
    for (the = 0; the < qtd; the++) {
        for (death = 0; death < qtd; death++) {
            printf ("Digite um numero: ");
            scanf ("%d", &love[the][death]);
        }
    }

    //Declaracao dos pares
    for (my = 0; my < qtd; my++) {
        for (life = 0; life < qtd; life++) {
            if (hate[my][life]%2==0) {
                PAR[batata] = hate[my][life];
                batata++;
            }
        }
    }
    //Declaracao dos impares
    for (the = 0; the < qtd; the++) {
        for (death = 0; death < qtd; death++) {
            if (love[the][death]%2==1) {
                IMPAR[tuberculo] = love[the][death];
                tuberculo++;
            }
        }
    }
    printf ("Pares:\n");
    for (my = 0; my < batata; my++) {
        printf ("%d\n", PAR[my]);
    }
    printf ("Impares:\n");
    for (my = 0; my < tuberculo; my++) {
        printf ("%d\n", IMPAR[my]);
    }
}
