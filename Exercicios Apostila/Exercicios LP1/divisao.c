#include <stdio.h>
int main(void)
{
 int N, R4, R5;
 printf("\nEntre um valor inteiro natural: ");
 scanf("%d", &N);
 R4 = N - 4 * (N / 4);
 R5 = N - 5 * (N / 5);
 if (R4 == 0 && R5 == 0)
 printf("%d\n", N);
 else
 printf("Valor nao e divisivel por 4 e 5\n");
 return 0;
} 