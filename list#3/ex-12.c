#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	int contAluno, contNota;
	float media, nota, maiorMedia;	
	
   setlocale(LC_ALL, "Portuguese");
   contAluno= 1;
   contNota= 1;
   
   maiorMedia= -1;
   
	printf("Bem vindo a Calculadora\n\n");
	
	do{
		printf("\nDigite as Notas para o %i� Aluno", contAluno);
		media=0;
		contNota=1;
		do{
			printf("\nInsira a %i� Nota ==> ", contNota);
			scanf("%f", &nota);
			media= media + nota;
			contNota++;
		}while(contNota<=3);

		media= media/3;
		
		printf("\nA m�dia do %i� Aluno foi: %0.2f", contAluno, media);
		
		if (media > maiorMedia){
			maiorMedia= media;
		}
		contAluno++;
		printf("\n---------------------------------\n");
	}while(contAluno<=10);

	printf("\nA maior m�dia foi: %0.2f", maiorMedia);

	return 0;
}

