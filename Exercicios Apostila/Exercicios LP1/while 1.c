#include <stdio.h>
int main(void)
{
 int A, B, R, I;
 I = 1;
 while (I <= 5)
 {
 printf("\n\nEntre um valor para A: "); scanf("%d", &A);
 printf("Entre um valor para B: "); scanf("%d", &B);
 R = A + B;
 printf("\nO resultado corresponde a: %d", R);
 I = I + 1;
 }
 return 0;
} 