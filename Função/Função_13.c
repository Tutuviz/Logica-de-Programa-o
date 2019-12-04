#include <stdio.h>
int loop;

int soma (a, b, c){
    return (a+b+c);
}

int quadrado(int x){
    return (x*x);
}

int cubo(int x){
    return (x*x*x);
}

int par_impar(x){
    if (x%2==0) {
        printf ("par e");
    }
    else {
        printf ("impar e");
    }
    
}

int pos_neg(x){
    if (x>0) {
        printf (" positivo\n");
    }
    else {
        if (x<0) {
            printf (" negativo\n");
        }
        else
        {
            printf (" neutro\n");
        }
        
    }
}

main() {
    int a, b, c;
    printf ("Digite um valor: ");
    scanf("%d", &a);
    printf ("Digite um valor: ");
    scanf("%d", &b);
    printf ("Digite um valor: ");
    scanf("%d", &c);

    printf ("Somas dos valores: %d\n", soma (a, b, c));

    printf ("O quadrado do primeiro numero eh: %d\n",quadrado(a));
    printf ("O quadrado do segundo numero eh: %d\n",quadrado(b));
    printf ("O quadrado do terceiro numero eh: %d\n",quadrado(c));

    printf ("O cubo do primeiro numero eh: %d\n",cubo(a));
    printf ("O cubo do segundo numero eh: %d\n",cubo(b));
    printf ("O cubo do terceiro numero eh: %d\n",cubo(c));

    printf ("O primeiro numero eh ");
    par_impar(a);
    pos_neg (a);
    printf ("O segundo numero eh ");
    par_impar(b);
    pos_neg (b);
    printf ("O terceiro numero eh ");
    par_impar(c);
    pos_neg (c);


}
