#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int vet[10], i;
	
	printf("\n\t\t\t --= VETOR =--\n");
	
	for (i = 0; i < 10; i++) {
		vet[i] = rand() % 10;
		
		printf("\nO n/� %d, est� na posi��o: %d", vet[i], i);
	}
	
	
	return 0;
	}
