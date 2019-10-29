#include <stdio.h>

main () {
    int vet[10], loop, par=0, impar=0;
    for (loop = 0; loop < 10; loop++) {
        printf ("Digite um valor: ");
        scanf ("%d",&vet[loop]);
    }
    for (loop = 0; loop < 10; loop++) {
        if (vet[loop] % 2 == 0) {
            par++;
        }
        else {
            impar++;
        }
    }
    printf ("Quantidade de numeros pares: %d\nQuantidade de numeros impares: %d", par, impar);
}
