#include <stdio.h>
#include <stdlib.h>

int main()
{
    float imc, altura, peso;

    //coleta de dados
    printf("Qual sua altura em metros?");
    scanf("%f", &altura);
    printf("\nQual � seu peso em kg?");
    scanf("%f", &peso);

    //calculo IMC
    imc= peso / (altura * altura);

    //exibi��o
    printf("\nSeu IMC �: %.2f", imc);
    return 0;
}
