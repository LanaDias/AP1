#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração de variaveis
    int num1;

    //Entrada de dados
    printf("digite um numero:");
    scanf("%i", &num1);

    //condições
    if (num1 % 2 == 0)
    {
        printf("O numero e par");
    }
    else
    {
        printf("O numero não e par");
    }


    return 0;
}
