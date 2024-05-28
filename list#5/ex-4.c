#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int i, num, vet[10];
	
	printf("\t\t\tDigite 10 números\n\n");
	
	for (i = 0; i < 10; i++) {
		printf("Nº %d: ", i + 1);
		scanf("%d", &num);
		
		if (num % 2 == 0) {
			vet[i] = 1;
		} else {
			vet[i] = 0;
		}
	}
	
	printf("\nVetor resultante: [ ");
	
	for (i = 0; i < 10; i++) {
		printf("%d, ", vet[i]);
	}
	
	printf("]");
	
	return 0;
}
