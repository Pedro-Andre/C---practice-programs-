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

	printf("\nValor de A é %i e seu end. de memória é: %d.", a, &a);
	printf("\nValor de B é %.1f e seu end. de memória é: %d.", b, &b);
	printf("\nValor de C é %i e seu end. de memória é: %d.", c, &c);
	
	return 0;
}
