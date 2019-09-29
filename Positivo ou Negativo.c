#include <stdio.h>

main () {
    int N1;
    printf ("Manda ae um numero: ");
    scanf ("%d",&N1);
    if (N1>0)
        printf ("%d eh positivo man",N1);
    else
        if (N1<0)
            printf ("%d eh negativo man",N1);
        else 
            printf ("%d eh zero man",N1);
    

}
