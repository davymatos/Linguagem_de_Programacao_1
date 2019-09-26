#include <stdio.h>
int main(void)
{
 int NUMERO;
 printf("\nEntre um numero entre 0 e 9: ");
 scanf("%d", &NUMERO);
 if (NUMERO >= 0 && NUMERO <= 9)
 printf("Valor valido");
 else
 printf("Valor invalido");
 return 0;
} 