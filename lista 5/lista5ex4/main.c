#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, carteira;

    printf("digite sua idade:");
    scanf("%i", &idade);
    printf("Voce possui carteira digite 1-sim e 2-nao?");
    scanf("%i", &carteira);

    if (idade >= 18 && carteira == 1)
    {
        printf("Pode dirigir\n");
    }

    else
    {
        printf("Nao pode dirigir");
    }
    return 0;
}
