#include <stdio.h>

main() {
    int qtd=2;
    int hate[qtd][qtd], my, life;
    int love[qtd][qtd], the, death;

    //Declaracao do matriz A
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

    //Multiplicando a matriz A
    for (my = 0; my < qtd; my++) {
        for (life = 0; life < qtd; life++) {
            hate[my][life] = hate[my][life]*2;
        }
    }

    //Multiplicando a matriz B
    for (the = 0; the < qtd; the++) {
        for (death = 0; death < qtd; death++) {
            love[the][death] = love[the][death]*4;
        }
    }

    //Printando a matriz A
    for (my = 0; my < qtd; my++) {
        for (life = 0; life < qtd; life++) {
            printf ("[%d]\t", hate[my][life]);
        }
    }
	printf ("\n");
    //Printando a matriz B
    for (the = 0; the < qtd; the++) {
        for (death = 0; death < qtd; death++) {
            printf ("[%d]\t", love[the][death]);
        }
    }

}
