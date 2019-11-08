#include <stdio.h>

main() {
    int qtd=5, my, life, hate[qtd][qtd], qtd_par=0, qtd_impar=0;
    for ( my = 0; my < qtd; my++) {
        for ( life = 0; life < qtd; life++) {
            printf ("Digite um numero: ");
            scanf ("%d", &hate[my][life]);
        }
    }
    for (my = 0; my < qtd; my++) {
        for ( life = 0; life < qtd; life++) {
            if (hate[my][life]%2==0) {
                qtd_par++;
            }
            else {
                qtd_impar++;
            }
        }
    }
    printf ("Quantidade de pares: %d\nQuantidade de impares: %d", qtd_par, qtd_impar);
}
