#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, x;
	printf ("Digite um numero \n");
	scanf ("%d", &a);
	printf ("Digite outro numero \n");
	scanf ("%d", &b);
	x = a + b;
		
		if(x >= 10){
			printf ("O novo numero agora sera: %d: ", x + 5);
		}
		else{
			printf ("O novo numero agora sera: %d ", x - 7);
		}
		
	return 0;
}
