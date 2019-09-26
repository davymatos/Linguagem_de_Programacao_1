#include <stdio.h>
#include <stdlib.h>

int main(){
	int num1, num2, cont;
	
	printf("Digite um numero: ");
	scanf("%d", &num1);
	printf("Digite outro numero: ");
	scanf("%d", &num2);
	
	while(num1 > num2){
		cont = num2 % 7;
		if(cont == 0){
			printf("%d, ", num2);
			num2++;
		}
		num2++;
	}
	return 0;
}