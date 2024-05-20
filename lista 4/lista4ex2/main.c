#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vp,des, valorfinal;

    printf("Digite o valor do produto:");
    scanf("%f", &vp);
    printf("digite a porcentagem de desconto:");
    scanf("%f", &des);

    valorfinal=  (1-des / 100) * vp;
    printf("\nO valor com desconto é: %f.2f\n", valorfinal);
    return 0;
}
