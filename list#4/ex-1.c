#include <stdio.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int num;
	
	while (num <= 50) {
		printf("%d\n ", num);
		num++;
	}
	return 0;
}
