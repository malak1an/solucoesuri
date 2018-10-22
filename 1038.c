#include <stdio.h>

int main (void){

	int cod, qtd;
	double soma;

	printf("\n");
	printf("Codigo ===== Especificação ===== Preço\n");
	printf("========================================\n");
	printf("|1 ------- Cachorro quente --- R$ 4.50 |\n");
	printf("|2 ------- X Salada ---------- R$ 4.50 |\n");
	printf("|3 ------- X Bacon ----------- R$ 5.00 |\n");
	printf("|4 ------- Torrada Simples --- R$ 2.00 |\n");
	printf("|5 ------- Refrigerante ------ R$ 1.50 |\n\n");
	printf("========================================\n");
	printf(".......:::: Faça o seu Pedido ::::.......\n\n");

	
	printf("Qual o código do pedido? \n");
	scanf ("%d", &cod);

	printf("Qual a quantidade? \n");
	scanf ("%d", &qtd);

	switch (cod) {

		case 1:
			soma = 4.5 * qtd;
			printf("Total: R$ %.2lf\n", soma);
		break;

		case 2:
			soma = 4.5 * qtd;
			printf("Total: R$ %.2lf\n", soma);
		break;

		case 3:
			soma = 5.0 * qtd;
			printf("Total: R$ %.2lf\n", soma);
		break;

		case 4:
			soma = 2.0 * qtd;
			printf("Total: R$ %.2lf\n", soma);
		break;

		case 5:
			soma = 1.5 * qtd;
			printf("Total: R$ %.2lf\n", soma);
		break;
	
		default:
			printf("Código digitado é inválido.\n");
		break;
	}
}