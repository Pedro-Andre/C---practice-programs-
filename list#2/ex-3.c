#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

	int valor, pais;
	float total;
	
	printf("\n Estados Unidos = 1 | França = 2 | México = 3 | Argentina = 4 | China = 5\n\n");
	
	printf("Digite o valor do produto: ");
	scanf("%d", &valor);
	
	printf("Digite o código do páis: ");
	scanf("%d", &pais);
	
	switch(pais) {
		case 1:
			total = valor + 60;
			printf("Valor total do pedido: %.2f", total);
			break;
		case 2:
			total = valor + 75.50;
			printf("Valor total do pedido: %.2f", total);
			break;	
		case 3:
			total = valor + 50;
			printf("Valor total do pedido: %.2f", total);
			break;
		case 4:
			total = valor + 27.35;
			printf("Valor total do pedido: %.2f", total);
			break;
		case 5:
			total = valor + 80;
			printf("Valor total do pedido: %.2f", total);
			break;
		default:
			printf("Digite um dia válido!");
	}

	return 0;
}
