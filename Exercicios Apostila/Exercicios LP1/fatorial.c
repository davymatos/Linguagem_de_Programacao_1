#include <stdio.h>
int main(void)
{
 int CONTADOR, N;
 long FATORIAL = 1;
 CONTADOR = 1;
 printf("\nPrograma Fatorial\n");
 printf("\nFatorial de que numero: "); scanf("%d", &N);
 do
 {
 FATORIAL *= CONTADOR;
 CONTADOR ++;
 }
 while (CONTADOR <= N);
 printf("\nFatorial de %d equivale a %d\n\n", N, FATORIAL);
 return 0;
} 