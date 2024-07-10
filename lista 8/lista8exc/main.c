#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10];
    int num_procurado, posicao = -1, i;

    //numeros digitados pelo user
    for (i=0; i<10; i++)
    {
        printf("digite o numero %i: ", i+1);
        scanf("%i", &num[i]);
    }

    //numero que o usuario quer saber a posição
    printf("Digite o numero procurador: ");
    scanf("%i", &num_procurado);

    // Procurar o número no vetor
    for (i = 0; i < 10; i++)
    {
        if (num[i] == num_procurado)
        {
            posicao = i;
            break;
        }
    }

    // Verifica se o número foi encontrado
    if (posicao != -1)
    {
        printf("Numero %i encontrado na posicao %i.\n", num_procurado, posicao);
    }
    else
    {
        printf("Numero %i nao encontrado no vetor.\n", num_procurado);
    }

    return 0;
}
