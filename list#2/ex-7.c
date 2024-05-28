#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

	int n1, n2, n3, temp;
	
	printf("Digite o 1º número: ");
	scanf("%d", &n1);
	
	printf("Digite o 2º número: ");
	scanf("%d", &n2);
	
	printf("Digite o 3º número: ");
	scanf("%d", &n3);
	
	if (n1 > n2) {
		temp = n1;
		n1 = n2;
		n2 = temp;
	} 
	else if (n2 > n3){
		temp = n2;
		n2 = n3;
		n3 = temp;
	}
	else if (n1 > n3){
		temp = n1;
		n1 = n3;
		n3 = temp;
	} 	
	
	printf("\n\nOrdem crescente: N1: %d, N2: %d, N3: %d", n1, n2, n3);
	
	return 0;
}
