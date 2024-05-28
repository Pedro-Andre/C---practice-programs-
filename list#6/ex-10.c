#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	
	int mat[3][4], i, j, vendidas, valorTotal = 0;
		
	//vendida 1 / 0 a venda	
	// 10$ corredor / 20$ janela

	//a00 a01 a02 a03 = 10
	//a10 a11 a12 a13 = 20
	//a20 a21 a22 a23 = 10	
		
	printf("\n\t\t\t\tPassagem de ônibus\n");
		
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			mat[i][j] = rand() % 2;
		}	
	}
	
	for (i = 0; i < 3; i++) {
		printf("\n| ");
		for (j = 0; j < 4; j++) {
			printf("%i ", mat[i][j]);
		}	
		printf("|");
	}
	
	printf("\n\n---=| MENU DE VENDAS |=---");
	printf("\n\n Poltronas disponíveis: \n");
	
	for (i = 0; i < 3; i++) {
		printf("\n| ");
		for (j = 0; j < 4; j++) {
			if (mat[i][j] == 0){
				printf("%i ", mat[i][j]);
			}
			else if (mat[i][j] == 1) {
				printf("x ");
				vendidas += mat[i][j];
				if (mat[i==0][j==0]) {
					
				}
			}
		}		
		printf("|");
	}
	
	printf("\n\nPoltronas vendidas: %d \nValor Total: %d", vendidas, valorTotal);
	
	
	
	//printf("valor: %d, posição: %d, j: %d", mat[i==2][j==2], i, j);
}
