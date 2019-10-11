#include <stdio.h>

main () {
    int n1;
    printf ("Escolha uma option: \n1 - cachorro \n2 - gato \n3 - peixe \n4 - mesa \n5 - janela \n6 - passaro\n\n");
    scanf ("%d", &n1);
    switch (n1) {
    case 1:
        printf ("dogo");
        break;
    case 2:
        printf ("cato");
        break;
    case 3:
        printf ("fishy");
        break;
    case 4:
        printf ("bookis on the table");
        break;
    case 5:
        printf ("windows");
        break;
    case 6:
        printf ("birdo");
        break;
    
    default:
        printf ("Option Invalid");
        break;
    }
}
