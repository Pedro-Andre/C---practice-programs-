#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int x, ant, suc;
	
	printf("\n Digite um valor para X: ");
	scanf("%d", &x);
	
	ant = x - 1;
	suc = x + 1;
	
	printf("\n O antecessor do n�mero digitado �: %d", ant);
	printf("\n O sucessor do n�mero digitado �: %d", suc);
	
	return 0;
}
