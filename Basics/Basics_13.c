//Elabore um algoritmo que apos ler 3 valores inteiros e diferentes imprima-os em ordem crescente.
//Arthur Passos - 64137
#include <stdio.h>

main(){
    int n1, n2, n3, maior, medio, menor;
    printf ("Digite um valor: ");
    scanf ("%d",&n1);
    printf ("Digite outro valor: ");
    scanf ("%d",&n2);
    if (n1 >= n2){
        maior = n1;
        menor = n2;
    }
    else {
        maior = n2;
        menor = n1;
    }
    printf ("Digite mais um valor: ");
    scanf ("%d",&n3);
    if (n3 >= maior){
        medio = maior;
        maior = n3;
    }
    else {
        if (n3 <= menor) {
            medio = menor;
            menor = n3;
        }
        else {
            medio = n3;
        }
    }
    printf ("%d,%d,%d\n",menor,medio,maior);
}
