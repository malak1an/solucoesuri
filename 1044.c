#include <stdio.h>

int main (void) {

	int n1, n2;

	printf("Digite o primeiro número: ");
	scanf ("%d", &n1);

	printf("Digite o segundo número: ");
	scanf ("%d", &n2);

	if (n1%n2==0 || n2%n1==0){

		printf("São múltiplos\n");

	}else{

		printf("Não são múltiplos\n");
	}

}