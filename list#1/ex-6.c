#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, media;
	
	printf("\nDigite o primeiro n�mero: ");
	scanf("%f", &n1);
	
	printf("\nDigite o segundo n�mero: ");
	scanf("%f", &n2);
	
	printf("\nDigite o terceiro n�mero: ");
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3) / 3;
	
	printf("\n1� valor digitado �: %.1f", n1);
	printf("\n2� valor digitado �: %.1f", n2);
	printf("\n3� valor digitado �: %.1f", n3);
	printf("\nM�dia dos valores digitados: %.1f", media);
	
	return 0;
}
