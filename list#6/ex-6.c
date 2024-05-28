#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int mat[3][3], i, j, mult;
	
	printf("\n\t\t\t --= MATRIZ 3x3 =--\n");
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			mat[i][j] = rand() % 10;
		}
	}
	
	for (i = 0; i < 3; i++) {
		printf("\n| ");
		for (j = 0; j < 3; j++) {
			if (i == j) {
				mult += mat[i][j];
			}
			printf("%i ", mat[i][j]);
		}
		printf("|");
	}

	mult = (mat[0][0] + mat[1][1] + mat[2][2]) * (mat[0][2] + mat[1][1] + mat[2][0]);

	printf("\n\nLinha-1 e Coluna-1: %d\nLinha-2 e Coluna-2: %d\nLinha-3 e Coluna-3: %d\n", mat[0][0], mat[1][1], mat[2][2]);	
	printf("\n\nLinha-1 e Coluna-3: %d\nLinha-2 e Coluna-2: %d\nLinha-3 e Coluna-1: %d\n", mat[0][2], mat[1][1], mat[2][0]);	
	printf("\n\nMultiplicação %d: ", mult);
	
	return 0;
}
