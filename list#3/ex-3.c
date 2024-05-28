#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int x = 1, mult, result;
	
	printf("Digite um número de 1 a 10: ");
	scanf("%d", &mult);
	
	do {
		
		result = x * mult;

		printf("\n %d x %d = %d", x, mult, result);

		x++;
	} while (x <= 10);
	
	return 0;
}
