#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
//entrada de dados
    printf("Digite um numero ");
    scanf("%i",&num);
// conndiçoes
    if (num >0)
    {
        printf("o numero %i e positivo\n", num);
    }
    else if (num <0)
    {
    printf("o numero %i e negativo\n", num);
    }
    else
    {
        printf("o numero %i e zero\n", num);
    }

    return 0;
}
