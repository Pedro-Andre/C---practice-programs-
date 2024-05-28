#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	
	int mat[5][5], i, j, pares, impares, maior, menor = 50;
	
	printf("\n\t\t\t ---= MATIRIZ 5x5 =---");
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			mat[i][j] = rand() % 50;
		}		
	}
	
	for (i = 0; i < 5; i++) {
		printf("\n| ");
		for (j = 0; j < 5; j++) {
			printf("%d ", mat[i][j]);
			
			
			//mostrando os maiores e menores números
			if (mat[i][j] > maior) {
				maior = mat[i][j];
			}
			else if (mat[i][j] < menor) {
				menor = mat[i][j];
			}
		}		
		printf("| ");
	}
	
	printf("\n\nPares: ");
	//mostrando os números pares 
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (mat[i][j] % 2 == 0) {
				printf("%i ", mat[i][j]);
				pares++;
			}
		}	
	}
	
	//mostrando os números ímpares 
	printf("\n\nÍmpares: ");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (mat[i][j] % 2 != 0) {
				printf("%i ", mat[i][j]);
				impares++;
			}
		}	
	}
	
	printf("\n\nQtd. Pares: %d | Qtd. Ímpares: %d", pares, impares);
	printf("\n\nMaior: %d | Menor: %d", maior, menor);
	
	return 0;
}
