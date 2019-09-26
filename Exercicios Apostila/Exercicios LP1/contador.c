#include <stdio.h>
int main(void)
{
 int A, B, R;
 for (A = 1, B = 1; A + B <= 15; A += 2, B ++)
 {
 R = A + B;
 printf("Resultado = %3d\n", R);
 }
 return 0;
} 