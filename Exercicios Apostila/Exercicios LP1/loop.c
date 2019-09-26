#include <stdio.h>
int main(void)
{
 int A, B, R, I;
 for(I = 1; I <= 5; I ++)
 {
 printf("\n\nEntre um valor para A: "); scanf("%d", &A);
 printf("Entre um valor para B: "); scanf("%d", &B);

R = A + B;
 printf("\nO resultado corresponde a: %d", R);
 }
 return 0;
} 