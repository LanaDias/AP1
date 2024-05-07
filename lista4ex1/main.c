#include <stdio.h>
#include <stdlib.h>
#include  <math.h>

int main()
{

    float vf,p,n,r;
    //dadsos
    printf("Digite o valor principal:");
    scanf("%f",&p);
    printf("digite o valor da taxa de juros:");
    scanf("%f",&r);
    printf("Digite o numero do periodo:");
    scanf("%f",&n);

    //calculo
    vf = p * pow (1 + r, n);
    printf("\no valor final é: %.2f", vf);

    return 0;
}
