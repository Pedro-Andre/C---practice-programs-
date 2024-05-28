#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int x, ant, suc;
	
	printf("\n Digite um valor para X: ");
	scanf("%d", &x);
	
	ant = x - 1;
	suc = x + 1;
	
	printf("\n O antecessor do número digitado é: %d", ant);
	printf("\n O sucessor do número digitado é: %d", suc);
	
	return 0;
}
