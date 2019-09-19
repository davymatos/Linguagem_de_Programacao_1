#include <stdio.h>

 int main(){
	 int A, B, X;
	 printf("Informe o valor de A: ");
	 scanf ("%d", &A);
	 printf("Informe o valor de B: ");
	 scanf ("%d", &B);
	 
	 if (A>B){
		 X = A;
		 A = B;
		 B = X;
	 }
	 
	 printf ("ordenados sao %d e %d", A, B);
	 
	 return 0;
 }
