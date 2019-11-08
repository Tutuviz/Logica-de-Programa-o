#include <stdio.h>

main() {
    int qtd=2, my, life, hate[qtd][qtd], sum=0;
    for ( my = 0; my < qtd; my++) {
        for ( life = 0; life < qtd; life++) {
            printf ("Digite um numero: ");
            scanf ("%d", &hate[my][life]);
        }
    }
    for ( my = 0; my < qtd; my++) {
        for ( life = 0; life < qtd; life++) {
            if (hate[my][life]>10) {
                sum = sum + hate[my][life]; 
            }
        }
    }
    printf ("A soma dos valores maior que 10 eh: %d", sum);
}
