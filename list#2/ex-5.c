#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

	int num;
	float valor;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	if (num % 2 == 0) {
		printf("\nEste n�mero � par!");
	} else {
		printf("\nEste n�mero � �mpar!");
	}
	
	return 0;
}
