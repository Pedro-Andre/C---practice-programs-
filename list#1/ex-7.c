#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int nascimento, anoAtual, idade;
	
	printf("\nDigite seu ano de nascimento: ");
	scanf("%d", &nascimento);
	
	anoAtual = 2024;
	idade = anoAtual - nascimento;
	
	printf("\nVocê tem %d anos de idade.", idade);
	
	return 0;
}
