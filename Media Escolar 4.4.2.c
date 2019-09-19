#include <stdio.h>
#include <stdlib.h>


int main(){
	
	float nota1, nota2, nota3, nota4, media;
	
	printf ("Digite o valor da 1 nota: ");
	scanf ("%f", &nota1);
	printf ("Digite o valor da 2 nota: ");
	scanf ("%f", &nota2);
	printf ("Digite o valor da 3 nota: ");
	scanf ("%f", &nota3);
	printf ("Digite o valor da 4 nota: ");
	scanf ("%f", &nota4);
	
	media = (nota1 + nota2 + nota3 + nota4)/4;
		
	if (media >= 5){
		printf ("Aluno aprovado");
	}
	
	else{
		printf ("Aluno reprovado");
	}
	
	return 0;
}
