#include <stdio.h>
#include <stdlib.h>

int main(){
	float c, f;
	
	c = 0;
	f = 32;
	
	while(f <= 80){
		c = (f - 32) * 5 / 9;
		printf("Celcius: %.3f  |  Fahrenheit: %.0f\n", c, f);
		f++;
	}
	return 0;
}