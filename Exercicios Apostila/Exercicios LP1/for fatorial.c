#include <stdio.h>
int main(void)
{
 int CONTADOR, N;
 long FATORIAL = 1;
 printf("\nPrograma Fatorial\n");
 printf("\nFatorial de que numero: "); scanf("%d", &N);
 for(CONTADOR = 1; CONTADOR <= N; CONTADOR ++)
 FATORIAL *= CONTADOR;
 printf("\nFatorial de %d equivale a %d\n\n", N, FATORIAL);
 return 0;
} 