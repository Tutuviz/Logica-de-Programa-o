#include <stdio.h>

main () {
    float N1, N2;
    printf ("Digite um numero ae: ");
    scanf ("%f",&N1);
    printf ("Digite outro numero ae: ");
    scanf ("%f",&N2);

    if (N1<N2) {
        printf ("%.1f,%.1f",N1,N2);
    }
    else {
        printf ("%.1f,%.1f",N2,N1);
    }
}
