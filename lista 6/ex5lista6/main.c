#include <stdio.h>
#include <stdlib.h>

int main()
{
    int avaliacao;
    //dados
    printf("escreva um numero inteiro de 1 a 5: ");
    scanf("%i", &avaliacao);

    //casos
    switch (avaliacao)
    {
    case 1:
        printf("Pessimo\n");
        break;
    case 2:
        printf("Ruim\n");
        break;
    case 3:
        printf("Medio\n");
        break;
    case 4:
        printf("Bom\n");
        break;
    case 5:
        printf("Exelente\n");
        break;
    default:
        printf("INVALIDO");

    }
    return 0;
}
