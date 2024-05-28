#include <stdio.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int num, pares = 0, impares = 0, primos = 0, cont;
	cont = 1;
	
	printf("Digite 10 números: \n");
	
	while (cont <= 10) {
		printf("%d: ", cont);
		scanf("%d", &num);
		
		if (num % 1 == 0 && num % num == 0) {
			primos++;
		}
		if (num % 2 == 0) {
			pares++;
		}
		else {
			impares++;
		}
		
		cont++;
	}
	
	printf("\nPares: %d", pares);
	printf("\nÍmares: %d", impares);
	printf("\nPrimos: %d", primos);
	
	
	return 0;
}
