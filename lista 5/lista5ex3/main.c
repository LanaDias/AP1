#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;

    //entrada de dados
    printf("digite o ano:");
    scanf("%i", &ano);

    //condi��o
    if ((ano % 4 == 0 && ano % 100 != 0)|| ano % 400 == 0)
    {
        printf("O ano %i e bissexto\n", ano);
    }
    else
    {
        printf("O Ano %i n�o e bissexto\n", ano);
    }

    return 0;
}
