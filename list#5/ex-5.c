#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int i, num, vet[5];
	float soma, media;
	
	printf("\t\t\tDigite 5 números\n\n");
	
	for (i = 0; i < 5; i++) {
		printf("Nº %d: ", i + 1);
		scanf("%d", &vet[i]);
		
		soma += vet[i];
	}
	
	printf("\nVetor resultante: [ ");
	
	for (i = 0; i < 5; i++) {
		printf("%d, ", vet[i]);
	}
	
	printf("].");
	
	media = soma / 5;
	
	printf("\n\nMédia aritmética do vetor: %.2f", media);
		
	
	return 0;
}
