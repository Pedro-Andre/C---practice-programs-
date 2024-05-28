#include <stdio.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL,"Portuguese");
	
	float velo;
	int opt;

	// m/s -> km/h = * 3.6
	// km/h -> m/s = / 3.6
	
	printf("\t\t\t Conversão de velocidade \n\n");
	
	while (opt != 0 ) {
		printf("\t (1 = Km/h para M/s | 2 = M/s para Km/h | 3 = Finalizar) \n\n");
		printf("Escolha o tipo de conversão: ");
		scanf("%d", &opt);

		switch (opt) {
			case 1:
				printf("\nDigite a velocidade em Km/h: ");
				scanf("%f", &velo);
				
				velo = velo / 3.6;
				printf("Velocidade de Km/h para M/s: %.2f.\n\n", velo);
				break;
				
			case 2:
				printf("\nDigite a velocidade em M/s: ");
				scanf("%f", &velo);
				
				velo = velo * 3.6;
				printf("Velocidade de M/s para Km/h: %.2f.\n\n", velo);
				break;
				
			case 3:
				printf("\n \t\t\t\t Até mais!");
				return 0;
				break;
				
			default:
				printf("Selecione uma conversão válida.");
		}
	
	}
	
	return 0;
}
