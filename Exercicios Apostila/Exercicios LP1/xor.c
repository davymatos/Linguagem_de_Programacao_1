#include <stdio.h>
int main(void)
{
 int S1, S2;
 printf("Entre sexo do 1o. - [1] = M / [0] = F: ");
 scanf("%d", &S1);
 printf("Entre sexo do 2o. - [1] = M / [0] = F: ");
 scanf("%d", &S2);
 if ((S1 == 1 && (!S2 == 1)) || ((!S1 == 1) && S2 == 1))
 printf("O 1o. pode dancar com o 2o.\n");
 else
 printf("O 1o. nao pode dancar com o 2o.\n");
 return 0;
} 