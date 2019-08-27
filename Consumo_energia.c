#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

#define i 0.3626;

int tot(float n1, float n2){
	float result;
	result = n1 * n2;
	return(result);
}

int reaj(float n1){
	float result;
	result = (n1 * 0.3626) + n1;
	return(result);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int qa, qhd, qdm, apar;
	float tarifa, p ,consumo, acum_consumo, total, reajuste, pr;
	
	acum_consumo = 0;
	total = 0;
	reajuste = 0;
	
	printf("+==========================================================+\n");
	printf("|BEM VINDO                                                 |\n");
	printf("|CALCULE AQUI O VALOR DE ENERGIA ELETRICA CONSUMIDA NO IFBA|\n");
	printf("|Digite o valor da tarifa:                                 |\n");
	scanf("|%f                                                        |\n", &tarifa);
	printf("|ANALISE DE SETORES DA INSTITUIÇÃO                         |\n");
	printf("|RESPONDA O QUESTIONARIO ABAIXO                            |\n");
	printf("+==========================================================+\n");
	
	fflush(stdin);
	printf("Neste setor tem ar condiconado? \n");
	scanf("%d", &apar);
	if(apar == 1){
		printf("Quantos ar condicionados tem neste setor? \n");
		scanf("%d", &qa);
		printf("Qual a potencia? \n");
		scanf("%f", &p);
		printf("Fica ligado quantas horas por dia? \n");
		scanf("%d", &qhd);
		printf("Fica ligado quantas dias por mês? \n");
		scanf("%d", &qdm);
		
		pr = (p/1000);
		consumo = ((qhd * qdm)* pr)* qa;
		acum_consumo = acum_consumo + consumo;	  		   	
	}
	system("cls");
	
	fflush(stdin);
	printf("Neste setor tem geladeira? \n");
	scanf("%d", &apar);
	if(apar == 1){
		printf("Quantos geladeiras tem neste setor? \n");
		scanf("%d", &qa);
		printf("Qual a potencia? \n");
		scanf("%f", &p);
		printf("Fica ligado quantas horas por dia? \n");
		scanf("%d", &qhd);
		printf("Fica ligado quantas dias por mês? \n");
		scanf("%d", &qdm);
		
		pr = (p/1000);
		consumo = ((qhd * qdm)* pr)* qa;
		acum_consumo = acum_consumo + consumo;	  		   	
	}
	system("cls");
	
	fflush(stdin);
	printf("Neste setor tem televisores? \n");
	scanf("%d", &apar);
	if(apar == 1){
		printf("Quantos televisores tem neste setor? \n");
		scanf("%d", &qa);
		printf("Qual a potencia? \n");
		scanf("%f", &p);
		printf("Fica ligado quantas horas por dia? \n");
		scanf("%d", &qhd);
		printf("Fica ligado quantas dias por mês? \n");
		scanf("%d", &qdm);
		
		pr = (p/1000);
		consumo = ((qhd * qdm)* pr)* qa;
		acum_consumo = acum_consumo + consumo;	  		   	
	}
	system("cls");
	
	fflush(stdin);
	printf("Neste setor tem computador? \n");
	scanf("%d", &apar);
	if(apar == 1){
		printf("Quantos computadores tem neste setor? \n");
		scanf("%d", &qa);
		printf("Qual a potencia? \n");
		scanf("%f", &p);
		printf("Fica ligado quantas horas por dia? \n");
		scanf("%d", &qhd);
		printf("Fica ligado quantas dias por mês? \n");
		scanf("%d", &qdm);
		
		pr = (p/1000);
		consumo = ((qhd * qdm)* pr)* qa;
		acum_consumo = acum_consumo + consumo;	  		   	
	}
	system("cls");
	
	fflush(stdin);
	printf("Neste setor tem lampada? \n");
	scanf("%d", &apar);
	if(apar == 1){
		printf("Quantas lampadas tem neste setor? \n");
		scanf("%d", &qa);
		printf("Qual a potencia? \n");
		scanf("%f", &p);
		printf("Fica ligado quantas horas por dia? \n");
		scanf("%d", &qhd);
		printf("Fica ligado quantas dias por mês? \n");
		scanf("%d", &qdm);
		
		pr = (p/1000);
		consumo = ((qhd * qdm)* pr)* qa;
		acum_consumo = acum_consumo + consumo;	  		   	
	}
	system("cls");
	
	total = tot(tarifa,acum_consumo);
	reajuste = reaj(total);
	
	printf("%f\n", acum_consumo);
	printf("%f\n", total);
	printf("%f\n", reajuste);
	
	getch();
	return 0;
}