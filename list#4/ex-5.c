#include <stdio.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL, "Portuguese");
	
    int qtd, num, maior, contaMaior, i;

    printf("Quantos numeros voc� quer inserir? ");
    scanf("%d", &qtd);

    maior = num;
    contaMaior = 1; 
	i = 1; 
	
    while (i <= qtd) {
        printf("%d� numero: ", i);
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
            contaMaior = 1; // reinica o contador para gerar a possibilidade da recontagem caso o numero atual for maior que o anterior
        } else if (num == maior) {
            contaMaior++; // incrementa o contador se o n�mero for igual ao maior at� agora
        }

        i++;
    }

    printf("\nO maior n�mero digitado foi: %d\n", maior);
    printf("Ele foi lido %d vez(es).\n", contaMaior);

    return 0;
}

