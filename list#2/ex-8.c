#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

	int n1, n2, n3;
	
	printf("Digite o 1º lado: ");
	scanf("%d", &n1);
	
	printf("Digite o 2º lado: ");
	scanf("%d", &n2);
	
	printf("Digite o 3º lado: ");
	scanf("%d", &n3);
	
	if (n1 == n2 && n2 == n3) {
		printf("Este é um triângulo equilátero.");
	} 
	else if (n1 == n2 || n1 == n3 || n2 == n3) {
		printf("Este é um triângulo isóceles.");
	}
	else if (n1 != n3 && n1 != n2){
		printf("Este é um triângulo escaleno.");
	} 	
	else {
		printf("Não é um triângulo.");
	}
	
	return 0;
}
