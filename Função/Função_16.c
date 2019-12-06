#include <stdio.h>

main(){
	int max=20, loop;
	float NOTA1[max], NOTA2[max], MEDIA[max], maior, menor;
	
	for (loop=0; loop<max; loop++){
		printf ("Digite a primeira nota: ");
		scanf ("%f", &NOTA1[loop]);
		printf ("Digite a segunda nota: ");
		scanf ("%f", &NOTA2[loop]);
	}
	
	for (loop=0; loop<max; loop++){
		MEDIA[loop] = (NOTA1[loop] + NOTA2[loop])/2;
	}
	
	for (loop=0; loop<max; loop++){
		if (loop==0){
			maior = MEDIA[loop];
			menor = MEDIA[loop];
		}
		if (MEDIA[loop]>maior){
			maior = MEDIA[loop];
		}
		if (MEDIA[loop]<menor){
			menor = MEDIA[loop];
		}
	}
	printf ("\nA maior media eh: %.2f \nA menor media eh: %.2f", maior, menor);
}
