#include <stdio.h>

int main (void) {

	int h1,h2;

	printf("Digite a hora de início do jogo: ");
	scanf ("%d", &h1);

	printf("Digite a hora de término do jogo: ");
	scanf ("%d", &h2);

	if (h1 >= h2) {

		printf("O JOGO DUROU %d HORA(S)\n", (24 - h1) + h2);

	}else {

		printf("O JOGO DUROU %d HORA(S)\n", h2 - h1);
	}

}