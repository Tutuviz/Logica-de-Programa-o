#include <stdio.h>

main () {
    int loop, idade
	;
    for (loop = 0; loop < 75; loop++) {
        printf ("Digite sua idade: ");
        scanf ("%d", &idade);
        if (idade < 18) {
            printf ("Menor de idade\n\n");
        }
        else {
            printf ("Maior de idade\n\n");
        }
    }
}
