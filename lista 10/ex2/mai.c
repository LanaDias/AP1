#include <stdio.h>

int main()
{
    int num, i, j;
    int matriz[3][3];

    printf("Digite os numeros da matriz 3x3:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Elemento [%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    // Para ler o número a ser encontrado
    printf("Digite o numero que quer encontrar: ");
    scanf("%i", &num);

    // Laço para percorrer a matriz e encontrar o número
    int encontrado = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (matriz[i][j] == num)
            {
                encontrado = 1;
                break;
            }
        }
    }

    if (encontrado)
    {
        printf("O numero esta presente na matriz.\n");
    }
    else
    {
        printf("O numero nao foi encontrado na matriz.\n");
    }

    return 0;
}
