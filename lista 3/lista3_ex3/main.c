#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, altura, area;
    //coleta de dados
    printf("Digite o valor da base em centimetros:");
    scanf("%i", &base);
    printf("digite a altura em centimetros:");
    scanf("%i", &altura);

    // calculo da �rea
    area = base * altura / 2;
    //exibi��o
    printf("A �rea do tri�ngulo � igual: %i", area);
    return 0;
}
