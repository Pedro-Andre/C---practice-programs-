#include <stdio.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int num, divisor, pares = 0, impares = 0, primos = 0, contador = 0;
	
	printf("\n Digite 10 n�meros: ");
	
	do {
		scanf("%d", &num);
		
		divisor = 0;
		int i = 1;
		do {
			if (num % i == 0)
				divisor++;
			i++;	
		} while (i <= num);
		
		if (divisor == 2)	
			primos++;
		
		if (num % 2 == 0)
			pares++;
	
		else
			impares++;
		
		contador++;
	
	} while (contador < 10);

	printf("Qtd. de n�meros pares: %d\n", pares);
	printf("Qtd. de n�meros impares: %d\n", impares);
	printf("Qtd. de n�meros primos: %d\n", primos);
	
	return 0;
}
