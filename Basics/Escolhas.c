#include <stdio.h>

main () {
    int n1, value;
    printf ("Digite um valor: ");
    scanf ("%d",&value);
    printf ("Escolha uma opcao: \n1 - Dobro \n2 - Triplo \n3 - cubo \n4 - antecessor \n5 - sucessor \n");
    scanf ("%d", &n1);
    switch (n1) {
    case 1:
        printf ("%d",value*2);
        break;
    case 2:
        printf ("%d",value*3);
        break;
    case 3:
        printf ("%d",value*value*value);
        break;
    case 4:
        printf ("%d",value-1);
        break;
    case 5:
        printf ("%d",value+1);
        break;    
    default:
        printf ("Opcao Invalida");
        break;
    }
}
