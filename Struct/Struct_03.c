#include <stdio.h>
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

main (){
    int max=5;
    identidade id[max];
    preencher (max, id);
    print (max, id);
}
