#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int tempo, dist, velo;
	
	printf("\nQual a distância percorrida pelo projétil?: ");
	scanf("%d", &dist);
	
	printf("\nEm quanto tempo ele percorreu essa distância: ");
	scanf("%d", &tempo);
	
	velo = (dist * 1000) / (tempo * 60);
	
	printf("\nDistância: %d", dist);
	printf("\nTempo do percurso: %d", tempo);
	printf("\nVelocidade: %d m/s.", velo);
	
	return 0;
}
