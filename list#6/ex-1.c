#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int vet[10], i;
	
	printf("\n\t\t\t --= VETOR =--\n");
	
	for (i = 0; i < 10; i++) {
		vet[i] = rand() % 10;
		
		printf("\nO n/º %d, está na posição: %d", vet[i], i);
	}
	
	
	return 0;
	}
