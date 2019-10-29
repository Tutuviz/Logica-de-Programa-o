#include <stdio.h>

main () {
    int vet[10], loop, par=0, pos=0;
    for (loop = 0; loop < 10; loop++) {
        printf ("Digite um valor: ");
        scanf ("%d",&vet[loop]);
        if (vet[loop] % 2 == 0) {
            par++;
        }
        if (vet[loop]>0) {
            pos++;
        }
        
    }
    printf ("Quantidade de numeros pares: %d\nQuantidade de numeros positivos: %d", par, pos);
}
