#include <stdio.h>
#include <stdlib.h>

int main() {

	float num1, num2, soma;
	printf ("Digite um numero \n");
	scanf ("%f", &num1);
	printf ("Digite outro numero \n");
	scanf ("%f", &num2);
	
	soma = num1 + num2;
		
	if (soma > 10){	
		printf ("A soma desses numeros sera: %.2f", soma);
	}

	return 0;
}
