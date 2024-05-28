#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int mat[2][2], i, j;
	
	printf("\n\t\t\t --= MATRIZ 2x2 =--\n");
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			mat[i][j] = rand() % 10;
		}
	}
	
	for (i = 0; i < 2; i++) {
		printf("\n| ");
		for (j = 0; j < 2; j++) {
			printf("%i ", mat[i][j]);
		}
		printf("|");
	}
	
	return 0;
	}
