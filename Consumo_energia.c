#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

#define imp 0.3626 //Constante da soma dos impostos somados

int main(){
	setlocale(LC_ALL, "Portuguese"); //Metodo da linguagem
	int qa, qhd, qdm, apar, setor;
	float tarifa, p ,consumo, acum_consumo, total, reajuste, pr;
	
	//INICIALIZAÇÃO DE VARIAVEIS
	p = 0;
	pr = 0; //Potencia dividida por 100
	qa = 0; 
	qhd = 0; 
	qdm = 0; 
	apar = 0;
	consumo = 0;
	tarifa = 0;
	acum_consumo = 0;
	total = 0;
	reajuste = 0;
	
	printf("+==========================================================+\n");
	printf("|BEM VINDO                                                 |\n");
	printf("|CALCULE AQUI O VALOR DE ENERGIA ELETRICA CONSUMIDA NO IFBA|\n");
	printf("|Digite o valor da tarifa: ");
	scanf("%f", &tarifa);
	printf("|ANALISE DE SETORES DA INSTITUIÇÃO                         |\n");
	printf("|RESPONDA O QUESTIONARIO ABAIXO                            |\n");
	printf("+==========================================================+\n");
	
	// Condicionais e calculos dos aparelhos por setor
	// Estrutura de repetição para consultar um novo setor
	do{
		//Questionario dos aparelhos
		printf("DIGITE 1 PARA [SIM] E 0 PARA [NÃO]\n");
		fflush(stdin); //Limpar o buffer do teclado -- Para Windows
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
			
			pr = (p/1000); // Calculo de potencia -- kWh
			consumo = ((qhd * qdm) * pr) * qa; // Calculo do consumo
			acum_consumo = acum_consumo + consumo; // Acumulador do consumo dos aparelhos
			 		   	
		}
		system("cls"); // Limpar a tela
		
		printf("DIGITE 1 PARA [SIM] E 0 PARA [NÃO]\n");
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
		
		printf("DIGITE 1 PARA [SIM] E 0 PARA [NÃO]\n");
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
		
		printf("DIGITE 1 PARA [SIM] E 0 PARA [NÃO]\n");
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
		
		printf("DIGITE 1 PARA [SIM] E 0 PARA [NÃO]\n");
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
		
		printf("DIGITE 1 PARA [SIM] E 0 PARA [NÃO]\n");
		printf("DESEJA CONSULTAR UM NOVO SETOR? \n");
		scanf("%d", &setor);
		system("cls");
		
	}while(setor == 1);	
	
	total = tarifa * acum_consumo; // Calculo do total
	reajuste = (total * imp) + total; // Calculo do reajuste do valor com os impostos
	
	printf("O consumo de energia é de: %f kWh\n", acum_consumo);
	printf("O total a pagar é de: R$%f\n", total);
	printf("O valor reajustado e de: R$%f\n", reajuste);
	
	getch(); //Função que aguarda uma mensagem do usuario, pausando o programa
	return 0;
}