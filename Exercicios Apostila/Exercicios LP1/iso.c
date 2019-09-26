#include <stdio.h>
#include <iso646.h>
int main(void)
{
 int NUMERO;
 printf("\nInforme um numero entre 0 e 9: ");
 scanf("%d", &NUMERO);
 if (NUMERO >= 0 and NUMERO <= 9)
 printf("Valor na faixa de 0 a 9");
 else
 printf("Valor fora da faixa de 0 a 9");
 return 0;
} 