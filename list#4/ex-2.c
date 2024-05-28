#include <stdio.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int num = 1;
	
	while (num <= 100) {
		if (num % 2 == 0) {
			printf("%d\n", num);
		}
		num++;
	}
	return 0;
}
