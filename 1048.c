#include <stdio.h>

int main(void){

	double salario, novoSalario, reajuste, indiceReajuste, porcento;
	char nome[20];

	printf("Digite o nome do funcionário: ");
	scanf ("%s", &nome);

	printf("Digite o salário do funcionário: ");
	scanf ("%lf", &salario);


	if (salario >= 0 && salario <= 400.00) {

		porcento = 1.15;

		novoSalario = salario * porcento;
		reajuste = novoSalario - salario;
		indiceReajuste = ((porcento - 1)*100);

		printf("Novo salário de %s: %.2lf \n", nome, novoSalario);
		printf("Reajuste ganho: %.2lf \n", reajuste);
		printf("Em percentual: %.0lf%\n", indiceReajuste);

	}else if (salario >= 400.01 && salario <= 800.00) {

		porcento = 1.12;
		novoSalario = salario * porcento;
		reajuste = novoSalario - salario;
		indiceReajuste = ((porcento - 1)*100);

		printf("Novo salário de %s: %.2lf \n", nome, novoSalario);
		printf("Reajuste ganho: %.2lf \n", reajuste);
		printf("Em percentual: %.0lf%\n", indiceReajuste);
	
	}else if (salario >= 800.01 && salario <= 1200.00) {

		porcento = 1.10;
		novoSalario = salario * porcento;
		reajuste = novoSalario - salario;
		indiceReajuste = ((porcento - 1)*100);

		printf("Novo salário de %s: %.2lf \n", nome, novoSalario);
		printf("Reajuste ganho: %.2lf \n", reajuste);
		printf("Em percentual: %.0lf%\n", indiceReajuste);
	
	}else if (salario >= 1200.01 && salario <= 2000.00) {

		porcento = 1.07;
		novoSalario = salario * porcento;
		reajuste = novoSalario - salario;
		indiceReajuste = ((porcento - 1)*100);

		printf("Novo salário de %s: %.2lf \n", nome, novoSalario);
		printf("Reajuste ganho: %.2lf \n", reajuste);
		printf("Em percentual: %.0lf%\n", indiceReajuste);
	
	}else if (salario > 2000.00) {

		porcento = 1.04;
		novoSalario = salario * porcento;
		reajuste = novoSalario - salario;
		indiceReajuste = ((porcento - 1)*100);

		printf("Novo salário de %s: %.2lf \n", nome, novoSalario);
		printf("Reajuste ganho: %.2lf \n", reajuste);
		printf("Em percentual: %.0lf%\n", indiceReajuste);
	}
}