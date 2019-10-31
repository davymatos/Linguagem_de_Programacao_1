#include <stdio.h>
#include <stdlib.h>

int main(){
	
		
  FILE *arq, *arq1;
  char Linha[100];
  char *result;
  int i;
  arq = fopen("Entrada.txt", "rt");       // LEITURA
  arq1 = fopen("Relatorio (saida).txt", "wt");  // GRAVAÇÃO
  if (arq == NULL)  // ERRO NA ABERTURA
  {
     printf("Problemas na abertura do arquivo\n");
     return;
  }
  i = 1;
  while (!feof(arq)){
	// Lê uma linha (inclusive com o '\n')
      result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n']
      
      if (result)  // Se foi possível ler
	  printf("Linha %d : %s",i,Linha);
	  result = fprintf(arq1,"Linha %d\n",i);
      i++;
  }
  fclose(arq);

	return 0;
}
