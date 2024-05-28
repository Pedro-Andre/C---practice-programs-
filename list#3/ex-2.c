#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int x = 1;
	
	do {
		if (x % 2 == 0) {
			printf("\n %d", x);
		}
		x++;
	} while (x <= 100);
	
	return 0;
}
