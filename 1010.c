#include <stdio.h>

int main (void) {

	char nomePeca1 [10];
	char nomePeca2 [10];
	int qtdPeca1;
	int qtdPeca2;
	double valorPeca1;
	double valorPeca2;	

	printf ("Digite o nome da peça 1: ");
	scanf("%s", nomePeca1);

	printf ("Quantas peças %s? ", nomePeca1);
	scanf("%d", &qtdPeca1);

	printf ("Qual o valor da %s? ", &nomePeca1);
	scanf("%lf", &valorPeca1);

	printf ("\n");

	printf ("Digite o nome da peça 2: ");
	scanf("%s", nomePeca2);

	printf ("Quantas peças %s? ", &nomePeca2);
	scanf("%d", &qtdPeca2);
	
	printf ("Qual o valor da %s? ", &nomePeca2);
	scanf("%lf", &valorPeca2);

	printf ("\n");

	double totalPeca1 = qtdPeca1 * valorPeca1;
	double totalPeca2 = qtdPeca2 * valorPeca2;
	double total = totalPeca1 + totalPeca2;

	printf ("Total de %s: %.2lf \n", nomePeca1, totalPeca1);
	printf ("Total de %s: %.2lf \n \n", nomePeca2, totalPeca2);

	printf ("Valor total a ser pago: %.2lf \n \n", total);

}
