#include <stdio.h>

main () {
    int N1, N2;


    printf ("Manda o primeiro numero: ");
    scanf ("%d",&N1);
    printf ("Manda o segundo numero: ");
    scanf ("%d",&N2);

    if (N1>N2) {
        printf ("%d eh menor do que %d",N2,N1);
    }
    else { 
        printf ("%d eh menor do que %d",N1,N2);
    }
}
