#include <stdio.h>

main () {
    int N1;
    printf ("Manda ae um numero: ");
    scanf ("%d",&N1);
    if (N1>10) {
        printf ("%d eh maior que 10 man",N1);
    }
    else {
        if (N1<10) {
            printf ("%d eh menor que 10 man",N1);
        }
        else {
            printf ("%d eh igual a 10 man",N1);
        }
    }
}
