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
    int exam, menu, stop=1; 
    id raio[max], mamo[max], ultra[max], resso[max];
    int qtd_raio=0, qtd_mamo=0, qtd_ultra=0, qtd_resso=0;
    //Menu
    while (stop!=0) {
        printf ("\n1 - Cadastrar\n2 - Ver exames cadastrados\n3 - Sair do menu \nEscolha sua opcao: ");
        scanf ("%d", &menu);
        switch (menu) {
        //Escolha de exames
        case 1:
            for (loop = 0; loop < max; loop++) {
                printf ("\n1 - Raio x\n2 - Mamografia\n3 - Ultrassonografia\n4 - Ressonancia\nEscolha sua consulta: ");
                scanf ("%d", &exam);
                switch (exam) {
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
            break;
        //Mostrar os exames
        case 2:
            raio_x (raio, qtd_raio);
            mamografia (mamo, qtd_mamo);
            ultrassonografia (ultra, qtd_ultra);
            ressonancia (resso, qtd_resso);
            break;
        //Saida do programa
        case 3:
            stop = 0;
            break;
        //Escolha errada
        default:
            printf ("Opcao Invalida");
            break;
        }
    }
}
