#include <stdio.h>

main () {
    int N1, N2;
    printf ("Manda ae um numero: ");
    scanf ("%d",&N1);
    printf ("Manda ae outro numero: ");
    scanf ("%d",&N2);

    if ((N1+N2) % 2 == 0) {
        printf ("%d que eh a soma dos 2 numeros eh par",N1+N2);
    }
    else {
        printf ("%d que eh a soma dos 2 numeros eh impar",N1+N2);
    }
}
