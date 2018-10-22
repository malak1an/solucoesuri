#include <stdio.h>

int main (void) {

	int num1, num2, num3;
	int maior;	

	printf ("Digite o primeiro número: ");
	scanf("%d", &num1);

	printf ("Digite o segundo número: ");
	scanf("%d", &num2);

	printf ("Digite o terceiro número: ");
	scanf("%d", &num3);

	if (num1 > num2 && num1 > num3) {
		maior = num1;
		printf ("%d É o maior", maior);

	}else if (num2 > num1 & num2 > num3){
		maior = num2;
		printf ("%d É o maior", maior);
	
	}else {
		maior = num3;
		printf("%d É o maior", maior);
	}

}
