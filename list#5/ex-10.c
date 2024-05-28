#include <stdio.h>

int main() {
    int vetor[5];
    int i, j, temp;

    // Recebendo os números para preencher o vetor
    printf("Digite 5 numeros:\n");
    for (i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    // Imprimindo o vetor antes da ordenação
    printf("\nVetor antes da ordenacao: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Ordenando o vetor usando o algoritmo de ordenação por bolha
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5 - i; j++) {
            if (vetor[j] < vetor[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    // Imprimindo o vetor ordenado
    printf("\nVetor ordenado de forma decrescente: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
