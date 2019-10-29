#include <stdio.h>

main () {
    int vet[6], loop, cont=0, sum=0, med;
    for (loop = 0; loop < 6; loop++) {
        printf ("Digite um valor: ");
        scanf ("%d",&vet[loop]);
        if (vet[loop]<10) {
            cont++;
            sum = sum + vet[loop];
            med = sum / cont;
        }
        else {
            printf("Nao tem numeros menores que 10");
        }
    }
    printf ("Exitem %d numeros menores que 10\nA soma dos numeros menores que 10 eh: %d\nA media dos valores eh %d", cont, sum, med);
}
