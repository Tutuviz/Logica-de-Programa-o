#include <stdio.h>
int loop, max=2;

typedef struct {
    char nome[20], sobrenome[20], sexo[20];
    int idade;
}id;

void preencher (id vet[], int position){
    printf ("\nDigite seu nome: ");
    scanf ("%s", &vet[position].nome);
    printf ("Digite seu sobrenome: ");
    scanf ("%s", &vet[position].sobrenome);
    printf ("Digite sua idade: ");
    scanf ("%d", &vet[position].idade);
    printf ("Digite seu sexo: ");
    scanf ("%s", &vet[position].sexo);
}

void raio_x (id vet[], int max){
    if (max != 0) {
        printf ("\n\nRaio x:\n");
        for (loop = 0; loop < max; loop++) {
            printf ("\nNome: %s %s\nIdade: %d\nSexo: %s\n", vet[loop].nome, vet[loop].sobrenome, vet[loop].idade, vet[loop].sexo);
        }
    }
}

void mamografia (id vet[], int max){
    if (max !=0){
        printf ("\n\nMamografia:\n");
        for (loop = 0; loop < max; loop++) {
            printf ("\nNome: %s %s\nIdade: %d\nSexo: %s\n", vet[loop].nome, vet[loop].sobrenome, vet[loop].idade, vet[loop].sexo);
        }
    }
}

void ultrassonografia (id vet[], int max){
    if (max !=0){
        printf ("\n\nUltrassonografia:\n");
        for (loop = 0; loop < max; loop++) {
            printf ("\nNome: %s %s\nIdade: %d\nSexo: %s\n", vet[loop].nome, vet[loop].sobrenome, vet[loop].idade, vet[loop].sexo);
        }
    }
}

void ressonancia (id vet[], int max){
    if (max !=0){
        printf ("\n\nRessonancia:\n");
        for (loop = 0; loop < max; loop++) {
            printf ("\nNome: %s %s\nIdade: %d\nSexo: %s\n", vet[loop].nome, vet[loop].sobrenome, vet[loop].idade, vet[loop].sexo);
        }
    }
}

main() {
    int x; 
    id raio[max], mamo[max], ultra[max], resso[max];
    int qtd_raio=0, qtd_mamo=0, qtd_ultra=0, qtd_resso=0;
    //Escolha de exames
    for (loop = 0; loop < max; loop++) {
        printf ("\n1 - Raio x\n2 - Mamografia\n3 - Ultrassonografia\n4 - Ressonancia\nEscolha sua consulta: ");
        scanf ("%d", &x);
        //Cadastro
        switch (x) {
        case 1:
            preencher (raio, qtd_raio);
            qtd_raio++;
            break;

        case 2:
            preencher (mamo, qtd_mamo);
            qtd_mamo++;
            break;

        case 3:
            preencher (ultra, qtd_ultra);
            qtd_ultra++;
            break;

        case 4:
            preencher (resso, qtd_resso);
            qtd_resso++;
            break;

        default:
            printf ("Opcao Invalida");
            loop--;
            break;
        }
    }
    //Mostrar os exames

    raio_x (raio, qtd_raio);
    mamografia (mamo, qtd_mamo);
    ultrassonografia (ultra, qtd_ultra);
    ressonancia (resso, qtd_resso);
}
