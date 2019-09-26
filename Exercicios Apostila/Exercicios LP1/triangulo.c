#include <stdio.h>
int main(void)
{
 float A, B, C;
 printf("\nInforme o lado A: "); scanf("%f", &A);
 printf("Informe o lado B: "); scanf("%f", &B);
 printf("Informe o lado C: "); scanf("%f", &C);
 printf("\n");
 if (A<B+C && B<A+C && C<A+B)
 if (A==B && B==C)
 printf("Triangulo Equilatero\n");
 else
 if (A==B || A==C || C==B)
 printf("Triangulo Isosceles\n");
 else
 printf("Triangulo Escaleno\n");
 else
 printf("Os valores fornecidos nao formam um triangulo\n");
 return 0;
} 