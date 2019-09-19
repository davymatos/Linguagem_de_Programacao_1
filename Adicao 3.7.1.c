#include <stdio.h>
#include <stdlib.h>


int main() {
	int num1, num2, add;
	
	printf ("Digite um numero: ");
	scanf ("%d", &num1);
	printf ("Digite outro numero: ");
	scanf ("%d", &num2);
	
	add = num1 + num2;
	
	printf ("A adicao desses dois numeros sera: %d", add);
	
	return 0;
}
