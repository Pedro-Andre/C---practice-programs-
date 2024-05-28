#include <stdio.h>
#include <stdlib.h>

// Fun��o de compara��o para qsort
int comparar(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int vetor[10];
    int i;

    // Preenchendo o vetor com n�meros inteiros
    printf("Digite 10 n�meros inteiros:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    // Imprimindo o vetor original
    printf("Vetor original: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Ordenando o vetor
    qsort(vetor, 10, sizeof(int), comparar);

    // Imprimindo o vetor ordenado
    printf("Vetor ordenado: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

