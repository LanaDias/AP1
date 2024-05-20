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

    // calculo da área
    area = base * altura / 2;
    //exibição
    printf("A área do triângulo é igual: %i", area);
    return 0;
}
