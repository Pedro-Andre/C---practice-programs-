#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int primeiroNum, segundoNum, soma;
	
	printf("\nDigite o primeiro n�mero: ");
	scanf("%d", &primeiroNum);
	
	printf("\nDigite o segundo n�mero: ");
	scanf("%d", &segundoNum);
	
	soma = primeiroNum + segundoNum;
	
	printf("\n1� n�mero digitado �: %d", primeiroNum);
	printf("\n2� n�mero digitado �: %d", segundoNum);
	printf("\nSoma dos n�meros digitados: %d", soma);
	
	return 0;
}
