#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

	int nota1, nota2, notaP1, notaP2, notaF, mediaSemestral, mediaFinal;
	
	printf("Nota da prova do 1º Bim.: ");
	scanf("%d", &nota1);
	
	printf("Nota da ativ. prática do 1º Bim.: ");
	scanf("%d", &notaP1);
	
	printf("Nota da prova do 2º Bim.: ");
	scanf("%d", &nota2);
	
	printf("Nota da ativ. prática do 2º Bim.: ");
	scanf("%d", &notaP2);
	
	mediaSemestral = (nota1 + nota2 + notaP1 + notaP2) / 2;
	
	printf("\nMédia semestral: %d", mediaSemestral);
	printf("\nAgora digite a nota da avaliação final: ");
	scanf("%d", &notaF);
	
	mediaFinal = (mediaSemestral + notaF) / 2;
	
	printf("\nMédia final: %d\n", mediaFinal);
	
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
