#include <stdio.h>

main() {
    int n1, n2, op;
    printf ("Qual o primeiro numero: ");
    scanf ("%d", &n1);
    printf ("Qual o segundo numero: ");
    scanf ("%d", &n2);
    printf ("Escolha uma operacao:\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
    scanf ("%d", &op);
    switch (op) {
        case 1:
            printf ("\nO resultado: %d", n1+n2);
            break;
        case 2:
            printf ("\nO resultado: %d", n1-n2);
            break;
        case 3:
            printf ("\nO resultado: %d", n1*n2);
            break;
        case 4:
            printf ("\nO resultado: %d", n1/n2);
            break;
        default:
            printf ("\nOpcao Invalida");
            break;
    }
}
