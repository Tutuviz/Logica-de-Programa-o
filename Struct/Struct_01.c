#include <stdio.h>
int loop, max=3;

typedef struct {
    int idade;
    char sexo[20], cor[20];
    char nome[20], sobrenome[20];
} identidade;

preencher (int max, identidade id[]) {
    for (loop = 0; loop < max; loop++) {
        printf ("Digite seu nome: ");
        scanf ("%s", &id[loop].nome);
        printf ("Digite seu sobrenome: ");
        scanf ("%s", &id[loop].sobrenome);
        printf ("Digite sua idade: ");
        scanf ("%d", &id[loop].idade);
        printf ("Digite seu sexo: ");
        scanf ("%s", &id[loop].sexo);
        printf ("Digite sua cor favorita: ");
        scanf ("%s", &id[loop].cor);
    }
}
printar(int max, identidade id[]){
    for (loop = 0; loop < max; loop++) {
        printf("Nome: %s %s \nIdade: %d \nSexo: %s \n Cor favorita: %d", id[loop].nome, id[loop].sobrenome, id[loop].idade, id[loop].sexo, id[loop].cor);
    }
}
main () {
    int loop;
    identidade id[max];
    preencher (max, id);
    printar (max, id);
}
