#include <stdio.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int senha, certa;
	certa = 1234;
	
	printf("Digite uma senha de 4 números. \n");
	printf("Senha: ");
	scanf("%d", &senha);
	
	if (senha == certa) {
		printf("\nSenha Correta!\n");
		return 0;
	}
	
	else {
		do {			
			printf("\nSenha Incorreta! Tente novamente.\n");
			printf("Senha: ");
			scanf("%d", &senha);
			
			if (senha == certa) {  
			printf("\nSenha Correta!\n");
			return 0;
		}	
		
	} while (senha != certa);
	}
	
	return 0;
	
}
