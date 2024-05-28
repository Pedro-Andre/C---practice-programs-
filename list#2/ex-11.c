#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

	int A, B, C;
    int temp;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    
    printf("Digite o valor de C: ");
    scanf("%d", &C);

    // Passo 2: Ordenar os valores em ordem crescente
    if (A > B) {
        temp = A;
        A = B;
        B = temp;
    }
    if (A > C) {
        temp = A;
        A = C;
        C = temp;
    }
    if (B > C) {
        temp = B;
        B = C;
        C = temp;
    }

    printf("Valores em ordem crescente: %d, %d, %d\n", A, B, C);

    return 0;
}
