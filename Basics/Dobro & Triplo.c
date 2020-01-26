#include <stdio.h>

main () {
    int loop, num;
    for ( loop = 0; loop < 10; loop++) {
        printf ("Digite um numero: ");
        scanf ("%d",&num);
        printf ("O dobro eh: %d\nO triplo eh: %d\n\n",num*2,num*3);
    }
}
