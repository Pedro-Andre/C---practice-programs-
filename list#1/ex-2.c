#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("\n Digite um número: ");
	scanf("%d", &num);
	
	printf("\n O número digitado é: %d", num);
	
	return 0;
}
