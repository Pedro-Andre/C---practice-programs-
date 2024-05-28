#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int primeiroNum, segundoNum, soma;
	
	printf("\nDigite o primeiro número: ");
	scanf("%d", &primeiroNum);
	
	printf("\nDigite o segundo número: ");
	scanf("%d", &segundoNum);
	
	soma = primeiroNum + segundoNum;
	
	printf("\n1º número digitado é: %d", primeiroNum);
	printf("\n2º número digitado é: %d", segundoNum);
	printf("\nSoma dos números digitados: %d", soma);
	
	return 0;
}
