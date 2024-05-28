#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

	int item, qtd;
	float valor;
	
	printf("Digite o código do produto (100 a 105): ");
	scanf("%d", &item);
	
	printf("Digite a qtd. do produto: ");
	scanf("%d", &qtd);
	
	switch(item) {
		case 100:
			valor = 1.20 * qtd;
			printf("Valor total R$: %.2f", valor);
			break;
		case 101:
			valor = 1.30 * qtd;
			printf("Valor total R$: %.2f", valor);
			break;	
		case 102:
			valor = 1.50 * qtd;
			printf("Valor total R$: %.2f", valor);
			break;
		case 103:
			valor = 1.20 * qtd;
			printf("Valor total R$: %.2f", valor);
			break;
		case 104:
			valor = 1.30 * qtd;
			printf("Valor total R$: %.2f", valor);
			break;
		case 105:
			valor = 1 * qtd;
			printf("Valor total R$: %.2f", valor);
			break;
		default:
			printf("Código inválido!");
	}

	return 0;
}
