#include <stdio.h>

main () {
    int N1, N2;
    printf ("Manda ae um numero: ");
    scanf ("%d",&N1);
    printf ("Manda ae outro numero: ");
    scanf ("%d",&N2);
    if (N1>N2) {
        printf ("%d eh maior que %d\n",N1,N2);
    }
    else {
        printf ("%d eh maior que %d\n",N2,N1);
    }
}
