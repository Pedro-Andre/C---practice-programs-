#include <stdio.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, i, soma = 0, mult = 1;
	
	printf("Digite o 1� n�mero: ");
	scanf("%d", &n1);
	
	printf("Digite o 2� n�mero: ");
	scanf("%d", &n2);
	
	// verifica e troca os valores caso o usuario digite o 1� numero como sendo o maior, depois
	// da troca � poss�vel calcular a soma do intervalo
	if (n1 > n2) {
		int temporario = n1;
		n1 = n2;
		n2 = temporario;
	}
	
	i = n1;
	
	// a soma e multplica��o dos n�meros desse intervalo, incluindo os n�meros digitados
	while (i <= n2) {
		if (i % 2 == 0) 
			soma += i;
		else 
			mult *= i;
		i++;
	}
	
	printf("\nSoma dos n�meros pares desse intervalo %d a %d �: %d\n", n1, n2, soma);
	printf("Multipli��o dos n�meros �mpares desse intervalo %d a %d �: %d", n1, n2, mult);	
	
    return 0;
}

