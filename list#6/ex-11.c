#include <stdio.h>
#include <locale.h>

int main (void) {
	setlocale(LC_ALL,"Portuguese");
	srand(time(0));
	
	int mat[4][4], i, j, soma, total;

	printf("\n\t\t\t\t QUADRADO MÁGICO\n\n");

	for (i = 0; i < 4; i++)	 {
		for (j = 0; j < 4; j++)	 {
			mat[i][j] = rand() % 10 + 1;
		}		
	}
	
	for (i = 0; i < 4; i++)	 {
		printf("\n| ");
		for (j = 0; j < 4; j++)	 {
			printf("%d ", mat[i][j]);
		}		
		printf("|");
	}
	
	//soma da diagonal principal
	soma = 0;
	for (i = 0; i < 4; i++) {
		soma += mat[i][i];
	}
	printf("\n\nDiagonal principal: %d", soma);
	
	total = soma;
	soma = 0;
	
	//soma da diagonal secundária
	for (i = 0; i < 4; i++) {
		soma += mat[i][4 - 1 - i];
	}
	printf("\n\nDiagonal secundária: %d\n\n", soma);
	
	// verifica as somas das linhas
	for (i = 0; i < 4; i++) {
		soma = 0;
		for (j = 0; j < 4; j++) {
			soma += mat[i][j];
		}
		printf("Linha %d: %d | ", i, soma);
	}
	
	printf("\n\n");
	
	// verifica as somas das colunas
	for (j = 0; j < 4; j++) {
		soma = 0;
		for (i = 0; i < 4; i++) {
			soma += mat[i][j];
		}
		printf("Coluna %d: %d | ", j, soma);
	}
	
	if (total == soma) {
		printf("\n\nÉ um quadrado mágico!\n");
	} else {
		printf("\n\nNão é um quadrado mágico.\n");
	}
	
	return 0;
}
