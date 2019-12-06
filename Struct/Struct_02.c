#include <stdio.h>
int loop;
typedef struct {
    char nome[20], sobrenome[20], sexo[20];
    int idade;
} identidade;

void preencher (int max, identidade vet[]){
    for (loop = 0; loop < max; loop++){
        printf ("Digite um nome: ");
        scanf ("%s", &vet[loop].nome);
        printf ("Digite agora sobrenome: ");
        scanf ("%s", &vet[loop].sobrenome);
        printf ("Digite o sexo: ");
        scanf ("%s", &vet[loop].sexo);
        printf ("Digite a idade: ");
        scanf ("%d", &vet[loop].idade);
    }
}

void print (int max, identidade vet[]){
    for (loop = 0; loop < max; loop++){
        printf ("\nO nome eh: %s %s sendo do sexo %s com %d anos\n",vet[loop].nome, vet[loop].sobrenome, vet[loop].sexo, vet[loop].idade);
    }
    
}

void print_25 (int max, identidade vet[]){
    for (loop = 0; loop < max; loop++){
        if (vet[loop].idade > 25){
            printf ("O nome eh: %s %s sendo do sexo %s com %d anos **Maior de 25**\n",vet[loop].nome, vet[loop].sobrenome, vet[loop].sexo, vet[loop].idade);
        }
    }
}

main (){
    int max=10;
    identidade id[max];
    preencher (max, id);
    print (max, id);
    print_25 (max, id);
}
