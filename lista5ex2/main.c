#include <stdio.h>
#include <stdlib.h>

int main()
{
    //var
    float media;
    int pre;
    //entrada de dados
    printf("digite sua media:");
    scanf("%f", &media);
    printf("Digite a porcentagem de presen�a em inteiro:");
    scanf("%i", &pre);

    //condi��o
    if (media >=7 && pre >=75)
    {
        printf("Aluno aprovado\n");
    }
    else
    {
        printf("Aluno reprovado\n");
    }
    return 0;
}
