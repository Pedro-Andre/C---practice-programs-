#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int celsius, faren;
	
	printf("\nDigite a temperatura em Celsius (C�): ");
	scanf("%d", &celsius);
	
	faren = (9 * celsius + 160) / 5;
	
	printf("\nTemperatura em Celsius (C�): %d", celsius);
	printf("\nTemperatura em Farenheit (F�): %d", faren);
	
	return 0;
}
