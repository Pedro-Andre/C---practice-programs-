#include <stdio.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num, maior, menor;
	int i = 1;
	
	printf("Digite números inteiros (Um número negativo encerra o programa.)\n");
	printf("%dº: ", i);
	scanf("%d", &num);
	
	maior = menor = num; //maior e menor iniciam com o valor do primeiro numero digitado
	
	while (num >= 0) {			
	
		i++;
		
		if (num > maior)
			maior = num;
		
		if (num < menor)
			menor = num;
		
		printf("%dº: ", i);
		scanf("%d", &num);
		
	}
	
	printf("Este foi o maior número digitado: %d.\n", maior);
	printf("Este foi o menor número digitado: %d.\n\n", menor);
	
	return 0;
	
}
