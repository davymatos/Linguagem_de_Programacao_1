#include <stdio.h>
#include <stdlib.h>

int main(){
	int num, max, min;

	while(num != 0){
		printf("Digite um numero: ");
		scanf("%d", &num);
		if(num > max){
			max = num;
		}
		if(num != 0 && num < min){
			min = num;
		}
	}
	printf("\nMaior numero: %d", max);
	printf("\nMinimo numero: %d", min);
	return 0;
}