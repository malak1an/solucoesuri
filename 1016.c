#include <stdio.h>

int main (void){

	int distancia;

	printf ("Qual a distância entre os carros? ");
	scanf ("%d", &distancia);

	int tempo = ((60*distancia)/30);

	printf ("Tempo = %d minutos \n \n", tempo);

}
