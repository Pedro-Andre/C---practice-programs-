#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	float base, indice, result;
	
	printf("\nDigite a base da raiz: ");
	scanf("%f", &base);
	
	printf("\nDigite o �ndice da raiz: ");
	scanf("%f", &indice);
	
	result = pow(base, 1/indice);
	
	printf("\nA raiz de %.0f por %.0f � %.0f.", base, indice, result);
	
	return 0;
}
