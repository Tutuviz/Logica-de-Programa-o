#include <stdio.h>
int loop;

void preencher1(int max, int vet1[]) {
    for (loop = 0; loop < max; loop++) {
        printf ("Escreva um numero para o primeiro vetor: ");
        scanf ("%d", &vet1[loop]);
    }
}

void preencher2(int max, int vet2[]) {
    for (loop = 0; loop < max; loop++) {
        printf ("Escreva um numero para o segundo vetor: ");
        scanf ("%d", &vet2[loop]);
    }
}

int comparacao(int max, int vet1[], int vet2[]){
    int qtd=0;
    for (loop = 0; loop < max; loop++) {
        if (vet1[loop]==vet2[loop]) {
            qtd++;
        }
    }
    return qtd;
}

main () {
    int max=6, vet1[max], vet2[max], sum;
    preencher1 (max, vet1);
    preencher1 (max, vet2);
    printf ("A quantidade de numeros iguais eh: %d",comparacao(max, vet1, vet2));
}
