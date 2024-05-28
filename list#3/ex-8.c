#include <stdio.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int idade, maior, menor, cont;
	float media, somaIdades;
	
	printf("Digite várias de idades (Uma idade = 0 encerra o programa.)\n\n");
	
	do {			
		printf("Idade: ");
		scanf("%d", &idade);
	
		if (cont == 0) {
			maior = menor = idade;
		} else {
			if (idade > maior)
				maior = idade;
		
			if (idade < menor)
				menor = idade;	 
		}
	
		if (idade != 0) {
			somaIdades += idade;
			cont++;
		}
		
	} while (idade != 0);
	
	if (cont > 0) {
		media = somaIdades / cont;
	} else {
		media = 0;
	}
		
	printf("Maior idade digitada: %d.\n", maior);
	printf("Menor idade digitada: %d.\n", menor);
	printf("-------------------------------------------\n");
	printf("A média das idade é: %.1f", media);
	
	return 0;
	
}
