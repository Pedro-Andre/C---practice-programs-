#include <stdio.h>
#include <locale.h>


int main (void) {
	setlocale(LC_ALL, "Portuguese");
	
	int i, vet[10];
	
	printf("\t\t\tImprimindo vetor ao contr�rio\n\n");
	
	for(i=0; i<10; i++) {
		vet[i] = rand () % 100;
	}
	
	printf("Vetor original: [ ");
	for(i=0; i<10; i++) {
		printf("%d ", vet[i]);
	}
	printf("].");
	
	printf("\n\nVetor ao contr�rio: [ ");
	for(i=9; i>=0; i--) {
		printf("%d ", vet[i]);
	}
	printf("].");
	
	return 0;
}

