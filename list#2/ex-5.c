#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

	int num;
	float valor;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	if (num % 2 == 0) {
		printf("\nEste número é par!");
	} else {
		printf("\nEste número é ímpar!");
	}
	
	return 0;
}
