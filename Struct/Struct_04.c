#include <stdio.h>
#include <string.h>
int loop;
typedef struct {
    char nome[20], marca[20], modelo[20], cor[10];
    int ano;
} identidade;

void preencher (int max, identidade vet[]){
    for (loop = 0; loop < max; loop++){
        printf ("Digite o nome do cliente: ");
        scanf ("%s", &vet[loop].nome);
        printf ("Digite a marca do veiculo: ");
        scanf ("%s", &vet[loop].marca);
        printf ("Digite o modelo do veiculo: ");
        scanf ("%s", &vet[loop].modelo);
        printf ("Digite a cor do veiculo: ");
        scanf ("%s", &vet[loop].cor);
        printf ("Digite o ano do veiculo: ");
        scanf ("%d", &vet[loop].ano);
    }
}

void print (int max, identidade vet[]){
    for (loop = 0; loop < max; loop++){
        printf ("\n\nNome:\t %s \nMarca:\t %s \nModelo:\t %s \nCor:\t %s \nAno:\t %d\n\n",vet[loop].nome, vet[loop].marca, vet[loop].modelo, vet[loop].cor, vet[loop].ano);
    }
    
}

void print2k10 (int max, identidade vet[]){
    for (loop = 0; loop < max; loop++){
        if (vet[loop].ano > 2010) {
            printf ("\n\nNome:\t %s \nMarca:\t %s \nModelo:\t %s \nCor:\t %s \nAno:\t %d**Pos 2010**\n\n",vet[loop].nome, vet[loop].marca, vet[loop].modelo, vet[loop].cor, vet[loop].ano);
        }
    }
    
}

void printModel (int max, identidade vet[]){
    printf ("\nModelos:\n");
    for (loop = 0; loop < max; loop++){
        printf ("%s\n",vet[loop].modelo);
    }
    
}

void printAna_car (int max, identidade vet[]){
    for (loop = 0; loop < max; loop++){
        if (strcmp(vet[loop].nome, "ana")==0 || strcmp(vet[loop].nome, "Ana")==0) {
        printf ("\n\nA cor do carro de Ana eh: %s \n\n",vet[loop].cor);
        }
    }
    
}

main (){
    int max=2;
    identidade id[max];
    preencher (max, id);
    print2k10 (max, id);
    printModel (max, id);
    printAna_car (max, id);
}
