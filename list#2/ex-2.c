#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

	int dia;
	
	printf("\n --- Dia da semana --- \n\n");
	
	printf("Digite um n�mero (1 a 7): ");
	scanf("%d", &dia);
	
	switch(dia) {
		case 1:
			printf("Segunda-feira");
			break;
		case 2:
			printf("Ter�a-feira");
			break;	
		case 3:
			printf("Quarta-feira");
			break;
		case 4:
			printf("Quinta-feira");
			break;
		case 5:
			printf("Sexta-feira");
			break;
		case 6:
			printf("S�bado");
			break;
		case 7:
			printf("Domingo");
			break;
		default:
			printf("Digite um dia v�lido!");
	}

	return 0;
}
