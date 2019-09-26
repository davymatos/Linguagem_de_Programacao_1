#include <stdio.h>
#include <stdlib.h>

int main(){
	int x, num, max;
	
	max = 0;
	for(x = 0; x < 10; x++){
		printf("Digite um numero: ");
		scanf("%d", &num);
		if(num > max){
			max = num;
		}
	}
	printf("\nMaior numero: %d", max);
	return 0;
}