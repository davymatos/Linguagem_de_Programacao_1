#include <stdio.h>
int main(void)
{
 int A, B, R, I = 1;
 do
 {
 printf("\n\nEntre um valor para A: "); scanf("%d", &A);
 printf("Entre um valor para B: "); scanf("%d", &B);
 R = A + B;
 printf("\nO resultado corresponde a: %d", R);
 I ++;
 }
 while (I <= 5);
 r