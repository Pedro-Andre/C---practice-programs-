#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

	int n1, n2, n3;
	
	printf("Digite o 1� lado: ");
	scanf("%d", &n1);
	
	printf("Digite o 2� lado: ");
	scanf("%d", &n2);
	
	printf("Digite o 3� lado: ");
	scanf("%d", &n3);
	
	if (n1 == n2 && n2 == n3) {
		printf("Este � um tri�ngulo equil�tero.");
	} 
	else if (n1 == n2 || n1 == n3 || n2 == n3) {
		printf("Este � um tri�ngulo is�celes.");
	}
	else if (n1 != n3 && n1 != n2){
		printf("Este � um tri�ngulo escaleno.");
	} 	
	else {
		printf("N�o � um tri�ngulo.");
	}
	
	return 0;
}
