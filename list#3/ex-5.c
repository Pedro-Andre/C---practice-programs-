#include <stdio.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL, "Portuguese");
	
    int qtd, num, maior, contaMaior;

    printf("Quantos numeros voce quer inserir? ");
    scanf("%d", &qtd);

    maior = num;
    contaMaior = 1; 

    int i = 1; // indica qual o numero a ser digitado agora
    do {
        printf("Digite o %d� numero: ", i);
        scanf("%d", &num);

        // verifica se o n�mero atual � maior do que o anterior considerado o maior
        if (num > maior) {
            maior = num;
            contaMaior = 1; // reinica o contador para gerar a possibilidade da recontagem caso o numero atual for maior que o anterior
        } else if (num == maior) {
            contaMaior++; // incrementa o contador se o n�mero for igual ao maior at� agora
        }

        i++;
    } while (i <= qtd); 

    printf("\nO maior n�mero digitado foi: %d\n", maior);
    printf("Ele foi lido %d vez(es).\n", contaMaior);

    return 0;
}

