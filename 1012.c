#include <stdio.h>

int main (void) {

	double a;
	double b;
	double c;
	double pi = 3.14159;

	/*printf ("Digite três números (Ex: 4.0 2.9 3.4): ");
	scanf("%d %d %d", &a, &b, &c);*/

	printf ("Digite o primeiro número (Formato: 4.0): ");
	scanf("%lf", &a);

	printf ("Digite o segundo número: ");
	scanf("%lf", &b);

	printf ("Digite o terceiro número: ");
	scanf("%lf", &c);	

	double triangulo = (a*c)/2;
	double circulo = pi * (c*c);
	double trapezio = ((a+b)*c)/2;
	double quadrado = b*b;
	double retangulo = a*b;

	printf ("TRIANGULO = %.3lf \n", triangulo);	
	printf ("CIRCULO = %.3lf \n", circulo);	
	printf ("TRAPÉZIO = %.3lf \n", trapezio);	
	printf ("QUADRADO = %.3lf \n", quadrado);	
	printf ("RETANGULO = %.3lf \n", retangulo);	


}
