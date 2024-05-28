#include <stdio.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int pares[20], impares[20], somaP = 0, somaI = 0, i = 0;
	
	do {
		pares[i] = (i + 1) * 2;
		somaP += pares[i];
		i++;
	} while (i < 20);
	
	i =0;
	
	do {
		impares[i] = (i * 2) + 1;
		somaI += impares[i];
		i++;
	} while (i < 20);
	
	printf("Pares: ");
	i = 0;
	
	do {
		printf("%d, ", pares[i]);
		i++;
	} while (i < 20);
	printf("\nSoma dos pares: %d\n", somaP);
	
		
	printf("\nÍmpares: ");
	i = 0;
	
	do {
		printf("%d, ", impares[i]);
		i++;
	} while (i < 20);
	printf("\nSoma dos ímpares: %d\n", somaI);
	return 0;
}
