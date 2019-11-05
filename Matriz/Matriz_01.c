#include <stdio.h>

main() {
    int mara, vilhoso, sidney[2][2];
    for (mara = 0; mara < 2; mara++) {
        for (vilhoso = 0; vilhoso < 2; vilhoso++) {
            printf ("Digite um numero: ");
            scanf ("%d", &sidney[mara][vilhoso]);
        }
    }
    for (mara = 0; mara < 2; mara++) {
        for (vilhoso = 0; vilhoso < 2; vilhoso++) {
            printf ("[%d]\t", sidney[mara][vilhoso]);
        }
    }
}
