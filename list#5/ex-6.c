#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int i, num, vet[5];
	
	for (i = 0; i < 5; i++) {
		vet[i] = rand() % 100;
	}
	
	printf("\n\t\t\tVetor: [");
	
	for (i = 0; i < 5; i++) {
		printf("%d, ", vet[i]);
	}
	
	printf("].\n");
	
	printf("\nDigite um número: ");
	scanf("%d", &num);
	
	for (i = 0; i < 5; i++) {
		if (num == vet[i]) {
			printf("\nO número %d existe no vetor, e sua posição é %d.", num, i);	
			return;
		} 
	}
	
	if (num != vet[i]) {
			printf("Este número não exite no vetor!"); 
	}
	
	return 0;
	
}
