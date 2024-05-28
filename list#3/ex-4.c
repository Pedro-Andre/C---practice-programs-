#include <stdio.h>
#include <locale.h>

// funçao que verifica se o numero e primo (divisivel por 1 ou por ele msm)
// se o número for menor ou igual a 1, não é primo
	
int ehPrimo(int num) {
	int i;
	
    if (num <= 1) {
        return 0;
    }
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	// a variavel "nums" recebe um array, um conjunto que serve para agrupar em uma variavel 1 ou mais dados
    int nums[10], i;
    int pares = 0, impares = 0, primos = 0;

    // este loop se repete pedindo para o usuario digitar um numero ate atingir 10
    printf("\t\t\t Digite 10 números: \n");
    for (i = 0; i < 10; i++) {
    	printf("%dº: ", i+1);
        scanf("%d", &nums[i]);
    }

    // Verifica e conta pares, ímpares e primos
    for (i = 0; i < 10; i++) {
        if (nums[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
        if (ehPrimo(nums[i])) {
            primos++;
        }
    }

    printf("-------------------------------\n");
    printf("Qtd. de pares: %d\n", pares);
    printf("Qtd. de ímpares: %d\n", impares);
    printf("Qtd. de primos: %d", primos);

    return 0;
}

