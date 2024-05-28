#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int i, pares = 0, impares = 0, vet[5];
	
	printf("\t\t\t\t\tDigite 5 números\n");
	
	for (i = 0; i < 5; i++){
		scanf("%d", &vet[i]);
	}
	
	printf("\n\t\t\tVetor: [");

	for (i = 0; i < 5; i++){
		printf("%d,", vet[i]);
		
		if (vet[i] % 2 == 0) {
			pares++;
		} else {
			impares++;
		}
	}


	printf("].");
	printf("\n\nQtd. de pares: %d", pares);
	printf("\nQtd. de ímpares: %d", impares);
	
	return 0;
}
