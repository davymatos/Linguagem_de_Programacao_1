#include <stdio.h>
int main(void)
52 Estudo Dirigido de Linguagem C
{
 float HT, VH, PD, TD, SB, SL;
 printf("Quantas horas de trabalho? "); scanf("%f", &HT);
 printf("Qual o valor da hora? "); scanf("%f", &VH);
 printf("Qual o percentual de desconto? "); scanf("%f", &PD);
 SB = HT * VH;
 TD = (PD/100) * SB;
 SL = SB - TD;
 printf("Salario Bruto ....: %7.2f\n", SB);
 printf("Desconto .........: %7.2f\n", TD);
 printf("Salario liquido ..: %7.2f\n", SL);
 return 0;
}
