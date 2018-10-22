#include <stdio.h>

int main (void) {

	double r;

	printf ("Digite o valor do raio: ");
	scanf("%lf", &r);

	double raio = r*r*r;
        double pi = 3.14159;
	
	double volume = (4/3.0) * pi * raio;

	printf ("VOLUME = %.3lf \n", volume);	

}
