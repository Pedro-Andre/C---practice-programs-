#include <stdio.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num, maior, menor;
	int i = 1;
	
	printf("Digite n�meros inteiros (Um n�mero negativo encerra o programa.)\n");
	printf("%d�: ", i);
	scanf("%d", &num);
	
	maior = menor = num; //maior e menor iniciam com o valor do primeiro numero digitado
	
	while (num >= 0) {			
	
		i++;
		
		if (num > maior)
			maior = num;
		
		if (num < menor)
			menor = num;
		
		printf("%d�: ", i);
		scanf("%d", &num);
		
	}
	
	printf("Este foi o maior n�mero digitado: %d.\n", maior);
	printf("Este foi o menor n�mero digitado: %d.\n\n", menor);
	
	return 0;
	
}
