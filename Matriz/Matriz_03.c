#include <stdio.h>

main() {
    int qtd=2;
    //Linha e colunas
    int mara, vilhoso;
    //Matriz A
    int sidney[qtd][qtd];
    //Matriz B
    int sidisney[qtd][qtd];
    //Matriz C
    int sidinho[qtd][qtd];
    //Par
    int qtd_par=0, par[qtd_par], pos_par=0;
    //Impar
    int qtd_impar=0, impar[qtd_impar], pos_impar=0;

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
            if (sidinho[mara][vilhoso]%2==0) {
                par[pos_par] = sidinho[mara][vilhoso];
                qtd_par++;
                pos_par++;
            }
            else {
                impar[pos_impar] = sidinho[mara][vilhoso];
                qtd_impar++;
                pos_impar++;
            }
        }
    }
    printf ("Pares:\n");
    for (mara = 0; mara < qtd_par; mara++) {
        printf ("%d\n", par[mara]);
    }
    
    printf ("Impares:\n");
    for (mara = 0; mara < qtd_impar; mara++) {
        printf ("%d\n", impar[mara]);
    }
}
