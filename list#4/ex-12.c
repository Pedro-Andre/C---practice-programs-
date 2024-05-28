#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int contAluno, contNota;
	float media, nota, maiorMedia;	
   
   contAluno = 1;
   contNota = 1;
   maiorMedia = -1;
   
	printf("\t\t\t\t Média de Alunos \n");
	
	while (contAluno <= 10) {
		
		printf("\nNotas para o %iº Aluno", contAluno);
		media=0;
		contNota=1;
		
		while (contNota <= 3) {
			
			printf("\n%iº Nota ==> ", contNota);
			scanf("%f", &nota);
			media = media + nota;
			contNota++;
			
		}

		media = media / 3;
		
		printf("\nA média do %iº Aluno foi: %0.2f", contAluno, media);
		
		if (media > maiorMedia) {
			maiorMedia= media;
		}
		
		contAluno++;
		
		printf("\n---------------------------------\n");
	}

	printf("\nA maior média foi: %0.2f", maiorMedia);

	return 0;
}

