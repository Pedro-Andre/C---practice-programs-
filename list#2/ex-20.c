#include <stdio.h>
#include <locale.h>

// 12 a 19 meio repetitvas

int main(void) {
	setlocale(LC_ALL, "Portuguese");

	int sexo;
    float altura, peso, imc;

    printf("\nDigite sua altura: ");
    scanf("%d", &altura);
    
    printf("\nDigite seu sexo (1-Masculino | 2-Feminino): ");
    scanf("%d", &sexo);
    
    printf("\nDigite seu peso: ");
    scanf("%d", &peso);
    
    imc = peso / (altura * altura);
    
    printf("\nSeu IMC é: %.2f\n", imc);
    toupper(sexo);
    
    if (sexo == 1) {
    	if(imc < 16.9) {
    		printf("\nMuito abaixo do peso");
		}
		if (imc >= 17 && imc < 18.4) {
			printf("\nAbaixo do peso");
		}
		if (imc >= 18.5 && imc < 24.9) {
			printf("\nPeso normal");
		}
		if (imc >= 25 && imc < 29.9) {
			printf("\nAcima do peso");
		}
		if (imc >= 30 && imc < 34.9) {
			printf("\nObesidade grau 1");
		} 
		if (imc >= 35 && imc < 40) {
			printf("\nObesidade grau 2");
		}
		if (imc > 40) {
			printf("\nObesidade grau 3");
		}
		else if (sexo == 2){
			if(imc < 16.5) {
    			printf("\nAbaixo do peso");
			}
			if (imc >= 16.6 && imc < 24.9) {
				printf("\nPeso ideal");
			}
			if (imc >= 25 && imc < 29.9) {
				printf("\nLevemente acima do peso");
			}
			if (imc >= 30 && imc < 39.9) {
				printf("\nObesidade grau 1");
			}
			if (imc >= 40) {
				printf("\nObesidade mórbida");
			}
			else {
				printf("\nObeso");
			}
		}
		else {
			printf("\nSexo não reconhecido");
		}
	}
    
    return 0;
}
