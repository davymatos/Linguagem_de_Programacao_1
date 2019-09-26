#include <stdio.h>
int main(void)
{
 float N1, N2, N3, N4, MD;
 printf("\nEntre a Nota 1 ...: "); scanf("%f", &N1);
 printf("Entre a Nota 2 ...: "); scanf("%f", &N2);
 printf("Entre a Nota 3 ...: "); scanf("%f", &N3);
 printf("Entre a Nota 4 ...: "); scanf("%f", &N4);
 MD = (N1 + N2 + N3 + N4) / 4;
 if (MD >= 5)
 printf("Aluno aprovado com media = ");
 else
 printf("Aluno reprovado com media = ");
 printf("%5.2f\n", MD);
 return 0;
}
