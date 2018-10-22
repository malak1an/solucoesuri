#include <stdio.h>

int main (void){

	char nome [10];
	double salarioFixo;
	double vendas;
	double salarioVar;	

	printf ("Digite o nome do vendedor: ");
	gets(nome);

	printf ("Digite o salário do(a) %s: ", &nome);
	scanf("%lf", &salarioFixo);

	printf ("Digite o total de vendas do(a) %s em dinheiro: ", &nome);
	scanf("%lf", &vendas); 
	
	printf("\n");

	salarioVar = salarioFixo + (vendas * 0.15);

	printf ("Nome = %s \n", nome);
	printf ("Salário com variável = %.2lf \n \n", salarioVar);

}	
