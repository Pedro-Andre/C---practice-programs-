#include <stdio.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, i, soma = 0, mult = 1;
	
	printf("Digite o 1º número: ");
	scanf("%d", &n1);
	
	printf("Digite o 2º número: ");
	scanf("%d", &n2);
	
	// verifica e troca os valores caso o usuario digite o 1ª numero como sendo o maior, depois
	// da troca é possível calcular a soma do intervalo
	if (n1 > n2) {
		int temporario = n1;
		n1 = n2;
		n2 = temporario;
	}
	
	i = n1;
	
	// a soma e multplicação dos números desse intervalo, incluindo os números digitados
	while (i <= n2) {
		if (i % 2 == 0) 
			soma += i;
		else 
			mult *= i;
		i++;
	}
	
	printf("\nSoma dos números pares desse intervalo %d a %d é: %d\n", n1, n2, soma);
	printf("Multiplição dos números ímpares desse intervalo %d a %d é: %d", n1, n2, mult);	
	
    return 0;
}

