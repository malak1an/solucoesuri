#include <stdio.h>

int main (void) {

	int ddd;

	printf("Informe o DDD: ");
	scanf ("%d", &ddd);

	switch (ddd) {

		case 61:
			printf("Brasília\n\n");
			break;

		case 71:
			printf("Salvador\n\n");
			break;

		case 11:
			printf("São Paulo\n\n");
			break;

		case 21:
			printf("Rio de Janeiro\n\n");
			break;

		case 32:
			printf("Juiz de fora\n\n");
			break;

		case 19:
			printf("Campinas\n\n");
			break;

		case 27:
			printf("Vitória\n\n");
			break;

		case 31:
			printf("Belo Horizonte\n\n");
			break;

		default:
			printf("DDD não cadastrado\n\n");
	}
}