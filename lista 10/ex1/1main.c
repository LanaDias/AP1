#include <stdio.h>

int main()
{
    int matriz[4][4];
    int i, j;
    int maior;

    // para lê os elementos da matriz
    printf("Digite os numero da matriz 4X4: ");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("elemento [%i][%i] ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }
    //para o maior elemento da matriz
    maior = matriz[0][0];
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }
        }
    }

    // imprimir o maior elemento
    printf("O maior elemento da matriz e %i\n", maior);
    return (0);
}