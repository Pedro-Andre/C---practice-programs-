#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("\n Digite um n�mero: ");
	scanf("%d", &num);
	
	printf("\n O n�mero digitado �: %d", num);
	
	return 0;
}
