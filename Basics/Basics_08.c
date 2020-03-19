#include <stdio.h>

main () {
    int facul;
    float n1, n2, media;
    printf ("Manda a primeira nota: ");
    scanf ("%f",&n1);
    printf ("Manda a segunda nota: ");
    scanf ("%f",&n2);
    printf ("Manda qual o teu curso: \n1 - Sistema de Informacao\n2 - Administracao\n3 - Fisioterapia\n4 - Direito\n\n");
    scanf ("%d",&facul);
	media = (n1+n2)/2;
	
    switch (facul) {
        case 1:
            if (media >= 7) {
                printf ("Aprovadissimo");
            }
            else {
                printf ("Reprovado");
            }
            break;
        case 2:
            if (media >= 5) {
                printf ("Aprovadissimo");
            }
            else{
                printf ("Reprovado");
            }
            
            break;
        case 3:
            if (media >= 8) {
                printf ("Aprovadissimo");
            }
            else {
                printf ("Reprovado");
            }
            break;
        case 4:
            if (media >= 9) {
                printf ("Aprovadissimo");
            }
            else {
                printf ("Reprovado");
            }
            break;
        default:
            printf ("Opcao invalida");
            break;
    }
}
