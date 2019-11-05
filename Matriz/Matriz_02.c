#include <stdio.h>

main() {
    int qtd=4;
    //linha e colunas
    int mara, vilhoso;
    //Matriz A
    int sidney[qtd][qtd];
    //Matriz B
    int sidisney[qtd][qtd];
    //Matriz C
    int sidinho[qtd][qtd];

    for (mara = 0; mara < qtd; mara++) {
        for (vilhoso = 0; vilhoso < qtd; vilhoso++) {
            printf ("Digite um numero: ");
            scanf ("%d", &sidney[mara][vilhoso]);
        }
    }

    for (mara = 0; mara < qtd; mara++) {
        for (vilhoso = 0; vilhoso < qtd; vilhoso++) {
            printf ("Digite um numero: ");
            scanf ("%d", &sidisney[mara][vilhoso]);
        }
    }

    for (mara = 0; mara < qtd; mara++) {
        for (vilhoso = 0; vilhoso < qtd; vilhoso++) {
            sidinho[mara][vilhoso] = sidney[mara][vilhoso] + sidisney[mara][vilhoso];
        }
    }

    for (mara = 0; mara < qtd; mara++) {
        for (vilhoso = 0; vilhoso < qtd; vilhoso++) {
            printf ("[%d]\t", sidinho[mara][vilhoso]);
        }
    }

}
