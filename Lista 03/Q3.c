#include <stdio.h>
#include <stdlib.h>

int main(){
	float c, f1, f2;
	
	c = 0;
	printf("Digite os graus em fahrenheit maior: ");
	scanf("%f", &f1);
	printf("Digite outros graus em fahrenheit menor: ");
	scanf("%f", &f2);
	
	while(f2 <= f1){
		c = (f2 - 32) * 5 / 9;
		printf("Celcius: %.3f  |  Fahrenheit: %.0f\n", c, f2);
		f2++;
	}
	return 0;
}