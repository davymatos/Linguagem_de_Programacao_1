#include <stdio.h>
#include <stdlib.h>

int main() {
	int num1, num2, soma;
	printf ("Digite um numero \n");
	scanf ("%d", &num1);
	printf ("Digite outro numero \n");
	scanf ("%d", &num2);
	soma = num1 + num2;
		
		if(soma >= 10){
			printf ("O novo numero agora sera: %d: ", soma + 5);
		}
		else{
			printf ("O novo numero agora sera: %d ", soma - 7);
		}
		
	return 0;
}
