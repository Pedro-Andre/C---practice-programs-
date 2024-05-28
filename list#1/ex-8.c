#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int celsius, faren;
	
	printf("\nDigite a temperatura em Celsius (Cº): ");
	scanf("%d", &celsius);
	
	faren = (9 * celsius + 160) / 5;
	
	printf("\nTemperatura em Celsius (Cº): %d", celsius);
	printf("\nTemperatura em Farenheit (Fº): %d", faren);
	
	return 0;
}
