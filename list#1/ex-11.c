#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	float raio, volu;
	
	printf("\nQual o raio da esfera?: ");
	scanf("%.1f", &raio);
	
	volu = ((4/3) * 3.14159) * (raio+3);
	
	printf("\nO volume da esfera é: %.1f.", volu);
	
	return 0;
}
