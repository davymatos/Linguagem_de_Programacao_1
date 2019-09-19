#include <stdio.h>

int main (){
	int a, b, r, resp;
	resp = 1;
	while (resp == 1){
		printf("Digite um valor para A: ");
		scanf("%d", &a);
		printf("Digite um valor para B: ");
		scanf("%d", &b);
		r = a + b;
		printf ("Resultado: %d\n", r);
		printf ("Deseja continuar?\n");
		printf ("Digite [1] para sim ou [0] para nao\n");
		scanf ("%d", &resp);
	}
	
return 0;
}
