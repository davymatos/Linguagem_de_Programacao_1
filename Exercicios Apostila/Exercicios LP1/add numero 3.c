#include <stdio.h>
int main (){
 int A,B,X;

    printf ("Informe um numero para A");
    scanf ("%i", &A);
    printf ("Informe um numero para B");
    scanf ("%i", &B);
    X = A+B;
    if (X>=10)
        printf ("%i", X+5);
    else
        printf ("%i", X-7);




return 0;
}
