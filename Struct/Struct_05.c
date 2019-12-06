#include <stdio.h>
int loop, max=20;

void preencher (int max, int vet[]){
	for (loop=0; loop<max; loop++){
		printf ("Digite um valor: ");
		scanf ("%d", &vet[loop]);	
	}
}

int maior_que_10 (int max, int vet[]){
	int qtd=0;
	for (loop=0; loop<max; loop++){
		if (vet[loop]>10){
			qtd++;
		}
	}
	return qtd;
}

int menor (int max, int vet[]){
	int menor;
	for (loop=0; loop<max; loop++){
		if (loop==0){
			menor = vet[loop];
		}
		if (vet[loop]<menor){
			menor = menor = vet[loop];
		}
	}
	return menor;
}

int par_impar (int max, int vet[]){
	
	int x=0,y=0;
	int pares[max], impares[max];
	
	for (loop=0; loop<max; loop++){
		if ((vet[loop]%2)==0){
			pares[x]=vet[loop];
			x++;
		}
		else {
			impares[y]=vet[loop];
			y++;
		}
	}
	printf ("Pares:\n");
	for (loop=0; loop<x; loop++){
		printf ("[%d]\t", pares[loop]);
	}
	printf ("\nImpares:\n");
	for (loop=0; loop<y; loop++){
		printf ("[%d]\t", impares[loop]);
	}
}

int buscador (int buscar, int vet[], int max){
	int qtd_busc=0;
	for (loop=0; loop<max; loop++){
		if (buscar<vet[loop]){
			qtd_busc++;
		}
	}
	return qtd_busc;
}

main(){
	int vet[max], buscar;
	preencher (max, vet);
	printf ("\nExistem %d valores maiores que 10\n", maior_que_10(max, vet));
	printf ("O menor valor do vetor eh: %d\n", menor(max, vet));
	par_impar (max, vet);
	
	printf ("\nDigite um numero para buscar os maiores que ele: ");
	scanf ("%d", &buscar);
	
	printf ("Existem %d valores que sao maiores que %d\n", buscador(buscar, vet, max), buscar);
}
