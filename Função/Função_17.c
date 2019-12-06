#include <stdio.h>

main(){
	int max=6, mat[max][max], lin, col;
	int qtd_par=0 , qtd_impar=0, sum_par=0, med_par;
	for (col=0; col<max; col++){
		for (lin=0; lin<max; lin++){
			printf ("Digite um numero: ");
			scanf ("%d", &mat[lin][col]);
		}
	}
	
	for (col=0; col<max; col++){
		for (lin=0; lin<max; lin++){
			if (mat[lin][col]%2==1){
				qtd_impar++;
			}
			if (mat[lin][col]%2==0){
				sum_par = sum_par + mat[lin][col];
				qtd_par++;
			}
		}
	}
	
	med_par = sum_par / qtd_par;
	
	
	
	printf ("A media dos valores pares existentes na matriz eh: %d\n", med_par);
	printf ("A quantidade dos valores impares na matriz eh: %d\n", qtd_impar);
	printf ("Onde a soma das coordenadas eh impar, os valores sao:\n");
	
	for (col=0; col<max; col++){
		for (lin=0; lin<max; lin++){
			if ((lin+col)%2==1){
				printf ("[%d]\t", mat[lin][col]);	
			}	
		}
	}
}
