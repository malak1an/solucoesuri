#include <stdio.h>

int main (void) {

	double intervalo;

	printf("Digite um valor (ex.: 5.05): ");
	scanf("%lf", &intervalo);

	if (0 >= intervalo && intervalo <= 25) {

		printf("Intervalo [0,25]\n");

	}else if (intervalo > 25 && intervalo <= 50){

		printf("Intervalo [25,50]\n");
	}else if (intervalo > 50 && intervalo <= 75){
		
		printf("Intervalo [50,75]\n");
	}else if (intervalo > 75 && intervalo <= 100){

		printf("Intervalo [75,100]\n");
	}
}