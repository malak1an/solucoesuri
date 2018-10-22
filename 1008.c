#include <stdio.h>

int main (void){

	char nome [10];
	double horasT;
	double recebeHora;
	double salarioVar;	

	printf ("Digite o nome do funcionário: ");
	gets(nome);

	printf ("Digite o número de horas trabalhadas: ");
	scanf("%lf", &horasT);

	printf ("Digite o valor do salário/hora: ");
	scanf("%lf", &recebeHora); printf("\n");

	salarioVar = horasT * recebeHora;

	printf ("Nome = %s \n", nome);
	printf ("Salário = %.2lf \n \n", salarioVar);

}	
