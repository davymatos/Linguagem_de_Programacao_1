#include <stdio.h>
int main(void)
{
 int A, B, X;
 printf("Informe um valor para a variavel A: "); scanf("%d", &A);
 printf("Informe um valor para a variavel B: "); scanf("%d", &B);
 if (A > B)
 {
 X = A;
 A = B;
 B = X;
 }
 printf("\nos valores ordenados sao: %d e %d", A, B);
 return 0;
} 