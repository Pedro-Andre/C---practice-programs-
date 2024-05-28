#include <stdio.h>

int main() {
    int contador = 1; // Iniciamos um contador para percorrer os n�meros
    int soma_pares = 0;
    int soma_impares = 0;
    int numero = 1; // Come�amos com o primeiro n�mero �mpar

    printf("N�meros pares e suas somas:\n");
    while (contador <= 20) {
        if (numero % 2 == 0) {
            printf("%d ", numero);
            soma_pares += numero;
            contador++;
        }
        numero++; // Avan�amos para o pr�ximo n�mero
    }
    printf("\nSoma dos 20 primeiros n�meros pares: %d\n", soma_pares);

    contador = 1; // Reiniciamos o contador
    numero = 1; // Reiniciamos o n�mero para calcular os �mpares
    printf("\nN�meros �mpares e suas somas:\n");
    while (contador <= 20) {
        if (numero % 2 != 0) {
            printf("%d ", numero);
            soma_impares += numero;
            contador++;
        }
        numero++; // Avan�amos para o pr�ximo n�mero
    }
    printf("\nSoma dos 20 primeiros n�meros �mpares: %d\n", soma_impares);

    return 0;
}

