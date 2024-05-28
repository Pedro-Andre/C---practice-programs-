#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	float tempo, velo, dist, gasol;
	
	printf("\nDigite o tempo gasto na viagem: ");
	scanf("%f", &tempo);
	
	printf("\nDigite a velocidade média durante a viagem: ");
	scanf("%f", &velo);
	
	dist = tempo * velo;
	gasol = dist / 12.0;
	
	printf("\nVelocidade média: %.1fKm/h.", velo);
	printf("\nTempo de viagem: %.1f horas.", tempo);
	printf("\nDistância percorrida: %.1f Km.", dist);
	printf("\nGasolina utilizada: %.1f litros.", gasol);
	
	return 0;
}
