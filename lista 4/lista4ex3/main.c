#include <stdio.h>
#include <stdlib.h>

int main()
{
    float real, dolar, conv;
    //coleta de dados
    printf("digite o valor  em Reais:");
    scanf("%f", &real);
    printf("digite o valor atual do Dolar:");
    scanf("%f",&dolar);

    //calculo
    conv = real / dolar;
    printf("\nO valor %.2f em dolar é %.2f", real, conv);
    return 0;
}
