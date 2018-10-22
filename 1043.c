#include <stdio.h>

int main (void) {

	double a, b, c, perimetroTriangulo, areaTrapezio;

	printf("condição de existência de um triângulo\n\n");

	printf("Digite o tamanho de A: ");
	scanf ("%lf", &a);

	printf("Digite o tamanho de B: ");
	scanf ("%lf", &b);

	printf("Digite o tamanho de C: ");
	scanf ("%lf", &c);

	if (a+b > c && a+c > b && b+c > a){

		perimetroTriangulo = a+b+c;

		printf("Perimetro = %.1lf\n", perimetroTriangulo);
		
	}else{

		areaTrapezio = (((a+b)*c)/2);

		printf("Area = %.1lf\n", areaTrapezio);
	}
}