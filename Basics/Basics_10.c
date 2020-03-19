#include <stdio.h>

main() {
    int N1, N2, N3, Menor;
    printf ("Digite um valor: ");
    scanf ("%d",&N1);
    printf ("Digite outro valor: ");
    scanf ("%d",&N2);
    printf ("Digite mais um valor: ");
    scanf ("%d",&N3);
    
    Menor = N1;
    if (N2<Menor) {
        Menor = N2;
    }
    else { 
        Menor = Menor;
    }

    if (N3<Menor) {
        Menor = N3;
    }
    else { 
        Menor = Menor;
    }
        
	printf ("O menor numero eh %d",Menor);
    
}


