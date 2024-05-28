#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	
	int mat[3][3], i, j, num = 0;
	
	printf("\n\t\t\t ---= MATRIZ 3x3 =--- \n\n");
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			mat[i][j] = rand() % 1000;
		}
	}
	
	//preenche matriz
	for (i = 0; i < 3; i++) {
		printf("\n| ");
		for (j = 0; j < 3; j++) {
			printf("%i ", mat[i][j]);
		}
		printf("|");
	}
	
	printf("\n\nAgora digite um número: ");
	scanf("%d", &num);
	
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
			if (num == mat[i][j]) {
				return printf("\nPessoa de Sorte!"); 		  
           	} 
			else {
       			printf("\nTu és azarado demais!");
   			}
        }
    }	
	
	return 0;
}
