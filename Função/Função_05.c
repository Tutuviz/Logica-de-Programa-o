#include <stdio.h>

void fill (int vet[], int max) {
    int loop;
    for (loop = 0; loop < max; loop++) {
        printf ("Digite um valor: ");
        scanf ("%d",&vet[loop]);
    }
}

int big_position (int vet[], int max) {
    int loop, qtd=0, big, pos_big;
    printf ("\nPosition:\n");
    for (loop = 0; loop < max; loop++) {
        if (loop == 0){
            big = vet[loop];
            pos_big = loop;
        }

        if (vet[loop] > big) {
            big = vet[loop];
            pos_big = loop;
        }
    }
    return pos_big;
}

main() {
    int max=20, vet[max];

    fill (vet, max);

    printf ("%d", big_position(vet, max));
}
