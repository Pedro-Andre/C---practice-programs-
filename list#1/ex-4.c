#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int a;
	float b;
	double c;
	
	a = 33;
	b = 65;
	c = 'F';

	printf("\nValor de A � %i e seu end. de mem�ria �: %d.", a, &a);
	printf("\nValor de B � %.1f e seu end. de mem�ria �: %d.", b, &b);
	printf("\nValor de C � %i e seu end. de mem�ria �: %d.", c, &c);
	
	return 0;
}
