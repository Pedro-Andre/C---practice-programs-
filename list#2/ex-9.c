#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

	int nota1, nota2, notaP1, notaP2, notaF, mediaSemestral, mediaFinal;
	
	printf("Nota da prova do 1� Bim.: ");
	scanf("%d", &nota1);
	
	printf("Nota da ativ. pr�tica do 1� Bim.: ");
	scanf("%d", &notaP1);
	
	printf("Nota da prova do 2� Bim.: ");
	scanf("%d", &nota2);
	
	printf("Nota da ativ. pr�tica do 2� Bim.: ");
	scanf("%d", &notaP2);
	
	mediaSemestral = (nota1 + nota2 + notaP1 + notaP2) / 2;
	
	printf("\nM�dia semestral: %d", mediaSemestral);
	printf("\nAgora digite a nota da avalia��o final: ");
	scanf("%d", &notaF);
	
	mediaFinal = (mediaSemestral + notaF) / 2;
	
	printf("\nM�dia final: %d\n", mediaFinal);
	
	if (mediaFinal >= 6) {
		printf("Aprovado!");
	}
	else if (mediaFinal == 5) {
		printf("Exame!");
	}
	else if (mediaFinal < 4.9) {
		printf("reprovado!");
	}
	
	return 0;
}
