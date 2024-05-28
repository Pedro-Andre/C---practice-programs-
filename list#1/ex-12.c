#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int base, expo, result = 0, i;
	
	printf("\nDigite a base da potência: ");
	scanf("%d", &base);
	
	printf("\nDigite o expoente da potência: ");
	scanf("%d", &expo);
	
	result = 1;
	for (i = 1; i <= expo; i++) {
		result = result * base;
	}
	
	printf("\nO resultado de %d elevado a %d é %d.", base, expo, result);
	
	return 0;
}
