#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Ol� Mundo!");
	
	return 0;
}
