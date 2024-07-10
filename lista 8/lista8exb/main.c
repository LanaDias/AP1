#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[8];
    int maior, menor;
    int i;

    // Entrada de dados
    for(i = 0; i < 8; i++)
    {
        printf("Digite o numero %i: ", i + 1);
        scanf("%i", &num[i]);
    }

    // Inicializa maior e menor com o primeiro elemento do vetor
    maior = menor = num[0];

    // Maior e menor elemento do vetor
    for(i = 1; i < 8; i++)
    {
        if(num[i] > maior)
        {
            maior = num[i];
        }
        if(num[i] < menor)
        {
            menor = num[i];
        }
    }

    // Saída de dados
    printf("O maior numero é: %i\n", maior);
    printf("O menor numero é: %i\n", menor);

    return 0;
}
