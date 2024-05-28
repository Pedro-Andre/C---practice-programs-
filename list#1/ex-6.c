#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, media;
	
	printf("\nDigite o primeiro número: ");
	scanf("%f", &n1);
	
	printf("\nDigite o segundo número: ");
	scanf("%f", &n2);
	
	printf("\nDigite o terceiro número: ");
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3) / 3;
	
	printf("\n1º valor digitado é: %.1f", n1);
	printf("\n2º valor digitado é: %.1f", n2);
	printf("\n3º valor digitado é: %.1f", n3);
	printf("\nMédia dos valores digitados: %.1f", media);
	
	return 0;
}
