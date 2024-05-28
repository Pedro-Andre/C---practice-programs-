#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
    int numeros[10];
    int contador = 0, i;

    printf("\t\t\tDigite 10 numeros\n");

    for (i = 0; i < numeros; i++) {
        printf("Nº %d: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) { 
            contador++; 
            	if (contador == 10) {
            		printf("\nNúmeros pares adicionados ao vetor: ");
    				for (i = 0; i < contador; i++) {
        				printf("%d ", numeros[i]);
    				}			
    				return;
				}
        } else { 
            printf("Digitar somente números pares!\n");
            i--;
        }
    }

    return 0;
}
