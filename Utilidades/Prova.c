#include <stdio.h>
int loop, max=8;

typedef struct {
    char nome[20], sobrenome[20];
    int idade, sexo;
}id;

void preencher (id vet[], int position){
    printf ("\nDigite o nome: ");
    scanf ("%s", &vet[position].nome);
    printf ("Digite o sobrenome: ");
    scanf ("%s", &vet[position].sobrenome);
    printf ("Digite a idade: ");
    scanf ("%d", &vet[position].idade);
    printf ("1 - Masculino 2 - Feminino\nEscolha seu sexo: ");
    scanf ("%d", &vet[position].sexo);
}
void sexo (id vet1[], int position1, id vet2[], int position2, id vet3[], int position3, id vet4[], int position4){
	int masc=0, fem=0;
	for (loop = 0; loop < position1; loop++) {
		if (vet1[loop].sexo == 1){
			masc++;
		}
		if (vet1[loop].sexo == 2){
			fem++;
		}
	}
	for (loop = 0; loop < position2; loop++) {
		if (vet2[loop].sexo == 1){
			masc++;
		}
		if (vet2[loop].sexo == 2){
			fem++;
		}
	}
	for (loop = 0; loop < position3; loop++) {
		if (vet3[loop].sexo == 1){
			masc++;
		}
		if (vet3[loop].sexo == 2){
			fem++;
		}
	}
	for (loop = 0; loop < position4; loop++) {
		if (vet4[loop].sexo == 1){
			masc++;
		}
		if (vet4[loop].sexo == 2){
			fem++;
		}
	}
	printf ("\n%d homens foram cadastrados\n%d mulheres foram cadastradas\n", masc, fem);
}

void med_idade (id vet1[], int position1, id vet2[], int position2, id vet3[], int position3, id vet4[], int position4) {
	float idade = 0, qtd=0, med;
	for (loop = 0; loop < position1; loop++) {
		idade = idade + vet1[loop].idade;
		qtd++;
	}
	for (loop = 0; loop < position2; loop++) {
		idade = idade + vet2[loop].idade;
		qtd++;
	}
	for (loop = 0; loop < position3; loop++) {
		idade = idade + vet3[loop].idade;
		qtd++;
	}
	for (loop = 0; loop < position4; loop++) {
		idade = idade + vet4[loop].idade;
		qtd++;
	}
	med = idade/qtd;
	printf ("\nA media das idades eh: %.2f\n", med);
}

void printar (id vet[], int max){
	for (loop = 0; loop < max; loop++) {
		if (vet[loop].sexo==1){
			printf ("\nNome: %s %s\nIdade: %d\nSexo: Masculino\n", vet[loop].nome, vet[loop].sobrenome, vet[loop].idade);
		}
		else{
			if (vet[loop].sexo==2){
				printf ("\nNome: %s %s\nIdade: %d\nSexo: Feminino\n", vet[loop].nome, vet[loop].sobrenome, vet[loop].idade);
			}
			else {
				printf ("\nNome: %s %s\nIdade: %d\nSexo: Indefinido\n", vet[loop].nome, vet[loop].sobrenome, vet[loop].idade);
			}
		}
    }
}

void raio_x (id vet[], int max){
    if (max != 0) {
        printf ("\n\nRaio x:\n");
        printar (vet, max);
    }
}

void mamografia (id vet[], int max){
    if (max !=0){
        printf ("\n\nMamografia:\n");
        printar (vet, max);
    }
}

void ultrassonografia (id vet[], int max){
    if (max !=0){
        printf ("\n\nUltrassonografia:\n");
        printar (vet, max);
    }
}

void ressonancia (id vet[], int max){
    if (max !=0){
        printf ("\n\nRessonancia:\n");
        printar (vet, max);
    }
}

main() {
    int exam, menu, stop=1; 
    id raio[max], mamo[max], ultra[max], resso[max];
    int qtd_raio=0, qtd_mamo=0, qtd_ultra=0, qtd_resso=0;
    //Menu
    while (stop!=0) {
        printf ("\n1 - Cadastrar\n2 - Ver exames cadastrados\n3 - Ver quantidade por cada sexo\n4 - Ver exames de mamografia\n5 - Ver a media das idades\n6 - Sair do menu \nEscolha sua opcao: ");
        scanf ("%d", &menu);
        switch (menu) {
        //Escolha de exames
        case 1:
            for (loop = 0; loop < max; loop++) {
                printf ("\n1 - Raio x\n2 - Mamografia\n3 - Ultrassonografia\n4 - Ressonancia\nEscolha uma consulta: ");
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
        //Separado por sexo
        case 3:
        	sexo (raio, qtd_raio, mamo, qtd_mamo, ultra, qtd_ultra, resso, qtd_resso);
        	break;
        //Mamografia
        case 4:
        	mamografia (mamo, qtd_mamo);
        	break;
        //Media de idade
        case 5:
        	med_idade (raio, qtd_raio, mamo, qtd_mamo, ultra, qtd_ultra, resso, qtd_resso);
        	break;
        //Saida do programa
        case 6:
            stop = 0;
            break;
        //Escolha errada
        default:
            printf ("Opcao Invalida");
            break;
        }
    }
}
