#include <stdio.h>

main () {
    int loop, idade;
    loop = 1;
    while (loop <= 75) {
        printf ("Digite sua idade: ");
        scanf ("%d", &idade);
        if (idade < 18) {
            printf ("Menor de idade\n\n");
        }
        else {
            printf ("Maior de idade\n\n");
        }
        loop = loop + 1;
    }
    
}
