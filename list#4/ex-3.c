#include <stdio.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int num, calc, mult = 1;
	
	printf("Digite um número de 1 a 10: ");
	scanf("%d", &num);
	
	while (mult <= 10) {
		calc = num * mult;
		
		printf("\n %d x %d = %d", num, mult, calc);
		
		mult++;
	}
	return 0;
}
