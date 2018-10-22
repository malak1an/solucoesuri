#include <stdio.h>

int main (void){

	int n1, n2, n3, maior, menor, medio;

	printf("Digite o primeiro número: ");
	scanf ("%d", &n1);

	printf("Digite o segundo número: ");
	scanf ("%d", &n2);

	printf("Digite o terceiro número: ");
	scanf ("%d", &n3);

	if (n1 > n2 && n1 > n3) {

		maior = n1;
		
		if (n2 > n3){
			menor = n3;
			medio = n2;
		}else {
			menor = n2;
			medio = n3;
		}

	}else if (n2 > n1 && n2 > n3){

		maior = n2;
		
		if (n1 > n3) {
			menor = n3;
			medio = n1;
		
		}else {
			menor = n1;
			medio = n3;
		}

	}else if (n3 > n1 && n3 > n2){

		maior = n3;

		if (n1 > n2){

			menor = n2;
			medio = n1;
		}else{
			menor = n1;
			medio = n2;
		}
	}

	printf("%d \n %d \n %d \n \n", menor, medio, maior);
	printf("%d \n %d \n %d \n \n", n1, n2, n3);
}
		


