#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int mat[5][5], maior = 0, menor = 200, i, j;
	
	printf("\n\t\t\t Maior e Menor de 200 números \n");
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			mat[i][j] = rand() % 100;
		}
	}
	
	for (i = 0; i < 5; i++) {
		printf("\n| ");
		for (j = 0; j < 5; j++) {
			printf("%i ", mat[i][j]);
			
			if (mat[i][j] > maior) {
				maior = mat[i][j];
			}
			else if (mat[i][j] < menor) {
				menor = mat[i][j];
			}
		}
		printf("|");
	}

	printf("\n\nMaior %d: | Menor: %d", maior, menor);
	
	return 0;
}
