#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int num1,num2,soma;
	printf ("Digite um numero \n");
	scanf ("%i",&num1);
	printf ("Digite outro numero \n ");
	scanf ("%i",&num2);
		soma = num1+num2;

		if (soma>=10){
			printf ("O novo numero agora sera %i \n",soma+5);
		}
		else{
			printf ("O novo numero agora sera %i \n ",soma-7);
		}
	return 0;
}
