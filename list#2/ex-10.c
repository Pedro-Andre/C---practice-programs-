#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

	int a, b, c, delta, x1, x2;
	
	printf("Digite o coeficiente A: ");
	scanf("%d", &a);
	
	printf("Digite o coeficiente B: ");
	scanf("%d", &b);
	
	printf("Digite o coeficiente C: ");
	scanf("%d", &c);
	
	delta = b*b-4*a*c;
	
	if (delta > 0) {
		x1 = (-b+sqrt(delta)/(2*a));
		x2 = (-b-sqrt(delta)/(2*a));
		printf("\nAs raízes da equação são: x1 = %.1f | x2 = %.1f", x1, x2);
	}
	else if (delta == 0) {
		x1 = - b / (2*a);
		printf("\nA equação possui raíz única. x = %.1f", x1);
	}
	else {
		float real = -b/(2*a);
		float real2 = sqrt(-delta)/(2*a);
		printf("\nAs raízes são x1 = %.1f + %.1f | x2 = %.1f - %.1f", real, real2, real, real2);
	}
	
	return 0;
}
