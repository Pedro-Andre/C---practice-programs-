#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int base, expo, result = 0, i;
	
	printf("\nDigite a base da pot�ncia: ");
	scanf("%d", &base);
	
	printf("\nDigite o expoente da pot�ncia: ");
	scanf("%d", &expo);
	
	result = 1;
	for (i = 1; i <= expo; i++) {
		result = result * base;
	}
	
	printf("\nO resultado de %d elevado a %d � %d.", base, expo, result);
	
	return 0;
}
