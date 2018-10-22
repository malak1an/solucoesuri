#include <stdio.h>

int main (void){

	double n1, n2, n3, n4, m1, m2, m3, m4, mg, exame, mExame;

	printf("Digite a primeira nota: ");
	scanf ("%lf", &n1);

	printf("Digite a segunda nota: ");
	scanf ("%lf", &n2);

	printf("Digite a terceira nota: ");
	scanf ("%lf", &n3);	

	printf("Digite a quarta nota: ");
	scanf ("%lf", &n4);

	m1 = (n1*2);
	m2 = (n2*3);
	m3 = (n3*4);
	m4 = (n4*1);

	mExame = 0;

	mg = ((m1+m2+m3+m4)/10);	

	if (mg < 5) {
		
		printf("Média: %.1lf\n", mg);
		printf("Aluno reprovado.\n");

	}else if (mg >= 5.0 && mg <= 6.9){

		printf("Média: %.1lf\n", mg);
		printf("Aluno em exame.\n\n");

		printf("Digite a nota do exame: ");
		scanf ("%lf", &exame);

		mExame = ((mg+exame)/2);

			if (mExame < 5.0) {
				printf("Aluno reprovado.\n");
				printf("Media final: %.2lf\n", mExame);
			
			}else if (mExame >= 5){
				
				printf("Aluno aprovado.\n");
				printf("Media final: %.1lf\n", mExame);
			}

	}else if (mg >= 7 && mg <= 10){
		
		printf("Aluno aprovado.\n");
		printf("Media: %.1lf\n", mg);
	}
}