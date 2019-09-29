#include <stdio.h>

main() {
    float N1, N2, N3;
    printf ("Digite a primeira nota: ");
    scanf ("%f",&N1);
    printf ("Digite a segunda nota: ");
    scanf ("%f",&N2);
    printf ("Digite a terceira nota: ");
    scanf ("%f",&N3);

    if (((N1+N2+N3)/3)>=7) {
        printf ("O aluno passou com %.2f",(N1+N2+N3)/3);
    }
    else {
        printf ("O aluno perdeu com %.2f",(N1+N2+N3)/3);
    }
}
