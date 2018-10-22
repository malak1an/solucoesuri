#include <stdio.h>

int main () {

	int valor, aux, x, sair;
	int cedulas[] = {100, 50, 20, 10, 5, 2, 1};
	sair = 1;

	while (sair == 1){
	
		printf("==== CONTADOR DE CEDULAS =====\n\n");
		printf("Digite um valor (R$)!\n");
		scanf("%d", &valor);

		if (valor == 0){
			printf("------- Valor inválido -----\n\n");

		}else{
			printf("---- Para o valor de R$ %d, a quantidade de cédulas é: ---- \n\n", valor);

			for (x = 0; x < 7; x++){

				if (aux = valor / cedulas[x]){
					
					printf("%d nota(s) de R$ %d,00\n", aux, cedulas[x]);
					valor = valor - (aux * cedulas[x]);
				}
			}
		}
        
		sair = 0;
		printf("\nDigite 1 para continuar\n");
		scanf("%d", &sair);
	
	}
}