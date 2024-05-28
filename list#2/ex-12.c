#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

	int qtd;
    float valor, total;

    printf("Digite a qtd. de maçãs que quer comprar: ");
    scanf("%d", &qtd);
    
    if (qtd < 12) {
    	valor = 0.3;
	} else {
		valor = 0.25;
	}
	
	total = qtd * valor;

    printf("\nO valor total é: R$ %.2f", total);

    return 0;
}
