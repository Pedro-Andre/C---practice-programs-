#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int i, maior, menor, vet[5];
	float soma = 0, media;
	
	printf("\t\t\t\t\tDigite 5 números\n");
	
	for (i = 0; i < 5; i++){
		scanf("%d", &vet[i]);
		soma += vet[i];
	}
	
	printf("\n\t\t\tVetor: [");

	for (i = 0; i < 5; i++){
		printf("%d,", vet[i]);
		
		if (i == 0)	 {
			maior = vet[i];
			menor = vet[i];
		}
	
		if (vet[i] > maior) {
			maior = vet[i];
		} 
	
		if (vet[i] < menor) {
			menor = vet[i];
		} 
	}
			
	media = soma / 5;

	printf("].");
	printf("\n\nMaior número do vetor: %d", maior);
	printf("\nMenor número do vetor: %d", menor);
	printf("\nMédia dos valores do vetor: %.2f", media);
	
	return 0;
}
