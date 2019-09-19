#include <stdio.h>
#include <stdlib.h>

int main() {
	float hora_aula, inss, sal_bruto, desconto, sal_liqui, hora_mes;

	printf ("Digite o valor da hora aula: ");
	scanf ("%f", &hora_aula);
	printf ("Digite o numero de horas trabalhadas no mes: ");
	scanf ("%f", &hora_mes);
	printf ("Digite o percentual  do INSS: ");
	scanf ("%f", &inss);
	
	sal_bruto = (hora_aula * hora_mes);
	desconto = (sal_bruto * (inss/100));
	sal_liqui = (sal_bruto) - (sal_bruto * (inss/100));
	
	printf ("\nO valor do seu salario bruto sera: %.2f\n", sal_bruto);
	printf ("O valor do desconto do inss sera: %.2f\n", desconto);
	printf ("O valor do seu salario liquido sera: %.2f", sal_liqui);

	return 0;
}
