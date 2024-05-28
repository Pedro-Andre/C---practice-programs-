#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int num, resto2, resto3;
	
	printf("\nDigite um número inteiro: ");
	scanf("%d", &num);
	
	resto2 = num % 2;
	
	printf("\nO resto da divisão de %d por 2 é %d: ", num, resto2);
	
	resto3 = num % 3;
	
	printf("\nO resto da divisão de %d por 3 é %d: ", num, resto3);
	
	return 0;
}
