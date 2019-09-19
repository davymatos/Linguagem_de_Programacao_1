#include <stdio.h>

int main(){
	int A,B,R,I;
	
	I = 1;
	while (I<=5) {
		printf ("Entre um valor para A: ");
		scanf ("%d", &A);
		printf ("Entre um valor para B: ");
		scanf ("%d", &B);
		
		R = A+B;
		
		printf ("O resultado e: %d\n\n", R);
		I++;
	}
	return 0;
}
