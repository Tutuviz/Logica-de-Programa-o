#include <stdio.h>
int loop;

void preencher(int max, int vet[]) {
    for (loop = 0; loop < max; loop++) {
        printf ("Escreva um numero: ");
        scanf ("%d", &vet[loop]);
    }
}

int sum_par (int max, int vet[]){
    int sum=0;
    for (loop = 0; loop < max; loop++) {
        if (loop % 2 == 0) {
            sum = sum + vet[loop];
        }
    }
    return sum;
}

main () {
    int max=50, vet[max], sum;
    preencher (max, vet);
    printf ("A soma dos numeros na posicao par eh: %d", sum_par (max, vet));
}
