#include <stdio.h>

int main() {
    int contador = 1; // Iniciamos um contador para percorrer os números
    int soma_pares = 0;
    int soma_impares = 0;
    int numero = 1; // Começamos com o primeiro número ímpar

    printf("Números pares e suas somas:\n");
    while (contador <= 20) {
        if (numero % 2 == 0) {
            printf("%d ", numero);
            soma_pares += numero;
            contador++;
        }
        numero++; // Avançamos para o próximo número
    }
    printf("\nSoma dos 20 primeiros números pares: %d\n", soma_pares);

    contador = 1; // Reiniciamos o contador
    numero = 1; // Reiniciamos o número para calcular os ímpares
    printf("\nNúmeros ímpares e suas somas:\n");
    while (contador <= 20) {
        if (numero % 2 != 0) {
            printf("%d ", numero);
            soma_impares += numero;
            contador++;
        }
        numero++; // Avançamos para o próximo número
    }
    printf("\nSoma dos 20 primeiros números ímpares: %d\n", soma_impares);

    return 0;
}

