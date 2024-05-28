#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int a, b;
	float result;
	
	printf("\nDigite o valor de A: ");
	scanf("%d", &a);
	
	printf("\nDigite o valor de B: ");
	scanf("%d", &b);
	
	if (b != 0) {
		result = (float)(a*b)/b;
		printf("\nO resultado do quadrado da divisão de A por B pe %.2f", result);
	} else {
		printf("\nDigite um número diferente de 0.");
	}
	
	return 0;
}
