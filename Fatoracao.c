#include <stdio.h>

 int main(){
	int contador, N;
	long  fatorial = 1;
	
	contador = 1;
	printf("Informe o valor a ser fatorado: ");
	scanf ("%d", &N);
	
	do {
	    fatorial *= contador;
	    contador++;
	}
	
	while (contador <= N);
	printf ("\nFatorial de %d equivale a %d", N, fatorial);

 return 0;
 }
