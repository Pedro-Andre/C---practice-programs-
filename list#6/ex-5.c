#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int mat[4][4], i, j, soma;
	
	printf("\n\t\t\t --= ÍMPARES =--\n");
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			mat[i][j] = rand() % 10;
		}
	}
	
	for (i = 0; i < 4; i++) {
		printf("\n| ");
		for (j = 0; j < 4; j++) {
			printf("%i ", mat[i][j]);
		}
		printf("|");
	}

	printf("\n\nÍmpares: ");
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (mat[i][j] % 2 != 0) {
				printf("%d ", mat[i][j]);
			}
		}
	}
	
	return 0;
}
