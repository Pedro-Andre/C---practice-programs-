#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int larg, alt, comp, vl;
	
	printf("\nDigite o comprimento da caixa: ");
	scanf("%d", &comp);
	
	printf("\nDigite a largura da caixa: ");
	scanf("%d", &larg);
	
	printf("\nDigite a altura da caixa: ");
	scanf("%d", &alt);

	vl = comp * larg * alt;
	
	printf("\nComprimento: %d", comp);
	printf("\nLargura: %d", larg);
	printf("\nAltura: %d", alt);
	printf("\nVolume da caixa: %d", vl);
	
	return 0;
}
