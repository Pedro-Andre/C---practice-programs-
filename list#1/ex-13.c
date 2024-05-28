#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	float pes, pe, metros;
	
	pe = 0.3048;
	
	printf("\nDigite o valor em pés: ");
	scanf("%f", &pes);
	
	metros = pes * pe;
	
	printf("Valor de %.1f pés equivale a %.1f em metros.", pes, metros);
	
	return 0;
}
