#include <stdio.h>

main () {
    int loop;
    float nota1, nota2, media;
    for (loop = 0; loop < 10; loop++) {
        printf ("Digite a primera nota: ");
        scanf ("%f", &nota1);
        printf ("Digite a segunda nota: ");
        scanf ("%f", &nota2);
        media = (nota1 + nota2)/2;
        printf ("A nota do aluno foi: %.1f\n\n", media);
    }
}
