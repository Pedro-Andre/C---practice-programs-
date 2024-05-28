#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");

	int i,linha, j,coluna, vendidos, valorTotal, opcao = 0, mat[3][4] = {0};

		printf ("\t\t      -- AV TURISMO --");
		printf ("\n\t\tVENDA DE PASSAGENS DE ÔNIBUS");
		printf ("\n---------------------------------------------------------------");
		printf ("\n\t\t\t   MENU");
		printf ("\n\t\t  1- Comprar assentos");
		printf ("\n\t\t  2- Visualizar poltronas");
		printf ("\n\t\t  3- Valor total das passagens");
		printf ("\n\t\t  4- Sair");
		printf ("\n---------------------------------------------------------------");
		
	while (1) {
		printf ("\n\nInsira um número de acordo com a opção desejada: ");
		scanf ("%i", &opcao);
		
		switch (opcao) {
			case 1:
			//Comprar assentos
				printf ("\n---------------------------------------------------------------");
				printf ("\nEscolha sua poltrona");
				printf ("\n0 - Dísponível, 1- Indisponível");
				printf ("\n");
				
				for (i=0; i<3; i++) {
					printf ("\n|");
						for (j=0;j<4;j++) {
							printf (" %i - %i%i ", mat[i][j], i, j);
						}
					printf ("|");
				}
			
				printf ("\n\nDigite o número da linha (0 a 2): ");
				scanf ("%i", &linha);
				printf ("\nDigite o número da coluna (0 a 3): ");
				scanf ("%i", &coluna);
			
				if (linha >= 0 && linha < i && coluna >= 0 && coluna < j) {
               		 if (mat[linha][coluna] == 0) {
              	    	mat[linha][coluna] = 1;
              	      	printf("\nPassagem vendida com sucesso!Obrigado(a) pela preferência");
              		} 
					else {
             	       	printf("\nPoltrona já vendida. Escolha outra poltrona.");
            	    }
           	 	} 
				else {
              	  	printf("\nEntrada inválida. Tente novamente.");
            	}
				printf ("\n---------------------------------------------------------------");	
			break;
			
			case 2:
			//Ver assentos	
				printf ("\n---------------------------------------------------------------");
				printf ("\n       Assentos disponíveis: ");
				printf ("\n0 - Dísponível, 1- Indisponível");
				printf ("\n");
				
				for (i=0; i<3; i++) {
					printf ("\n|");
						for (j=0;j<4;j++) {
							printf (" %i - %i%i ", mat[i][j], i, j);
						}
					printf ("|");
				}
			break;
		
			case 3: 
            //Valor da compra
				valorTotal = 0;
					for (i = 0; i < 3; i++) {
	                	for (j = 0; j < 4; j++) {
	                    	if (mat[i][j] == 1) {
                        		if (j == 0 || j == 3) {
                           		 valorTotal += 20;
                        		} 
							else {
                            	valorTotal += 10;
                        	}
                    	}
                	}
            	}
            	printf("\nValor total das vendas: R$ %i", valorTotal);
			break;
	
			case 4:
			//Finalizar programa	
				printf ("\nMuito obrigado pela preferência!Saindo do programa...");
				break;
			break;
		}		
	}
	
 return 0;
}
