#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int x = 1;
	
	do {
		printf("\n %d", x);
		x++;
	} while (x <= 50);
	
	return 0;
}
