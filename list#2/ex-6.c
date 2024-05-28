#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

	int n1, n2, n3;
	
	printf("Digite o 1º número: ");
	scanf("%d", &n1);
	
	printf("Digite o 2º número: ");
	scanf("%d", &n2);
	
	printf("Digite o 3º número: ");
	scanf("%d", &n3);
	
	if (n1 > n2 && n1 > n3) {
		printf("\n%d é maior que os demais: %d, %d!", n1, n2, n3);
	} 
	else if (n2 > n1 && n2 > n3){
		printf("\n%d é maior que os demais: %d, %d!", n2, n1, n3);
	}
	else if (n3 > n1 && n3 > n2){
		printf("\n%d é maior que os demais: %d, %d!", n3, n2, n1);
	} 	
	
	return 0;
}
