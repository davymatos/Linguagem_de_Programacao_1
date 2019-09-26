#include <stdio.h>
int main(void)
{
 int CODIGO;
 printf("\nEntre o codigo de acesso: ");
 scanf("%d", &CODIGO);
 if (CODIGO == 1 || CODIGO == 2 || CODIGO == 3)
 {
 if (CODIGO == 1)
 printf("um\n");
 if (CODIGO == 2)
 printf("dois\n");
 if (CODIGO == 3)
 printf("tres\n");
 }
 else
 printf("codigo invalido\n");
 return 0;
} 