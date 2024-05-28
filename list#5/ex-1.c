#include <stdio.h>
#include <locale.h>


int main (void) {
	setlocale(LC_ALL, "Portuguese");
	
	int i, vet[10];
	
	printf("\t\t\tPreenchimento aleatório do Vetor\n\n");
	
	for(i=0; i<10; i++) {
		vet[i] = rand () % 100;
	}
	
	for(i=0; i<10; i++) {
		printf("\nA %iº posicão no vetor é: %i ", i, vet[i]);
	}
	
	return 0;
}

