#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declara��o de variaveis
    int num1;

    //Entrada de dados
    printf("digite um numero:");
    scanf("%i", &num1);

    //condi��es
    if (num1 % 2 == 0)
    {
        printf("O numero e par");
    }
    else
    {
        printf("O numero n�o e par");
    }


    return 0;
}
