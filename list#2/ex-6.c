#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

	int n1, n2, n3;
	
	printf("Digite o 1� n�mero: ");
	scanf("%d", &n1);
	
	printf("Digite o 2� n�mero: ");
	scanf("%d", &n2);
	
	printf("Digite o 3� n�mero: ");
	scanf("%d", &n3);
	
	if (n1 > n2 && n1 > n3) {
		printf("\n%d � maior que os demais: %d, %d!", n1, n2, n3);
	} 
	else if (n2 > n1 && n2 > n3){
		printf("\n%d � maior que os demais: %d, %d!", n2, n1, n3);
	}
	else if (n3 > n1 && n3 > n2){
		printf("\n%d � maior que os demais: %d, %d!", n3, n2, n1);
	} 	
	
	return 0;
}
