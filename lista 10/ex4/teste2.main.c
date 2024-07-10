#include <stdio.h> // biblioteca 

int main()
{
    // matriz 3X3 com lista de inicialização e com laço for para percorrer a matriz
    int mat[3][3] = {
        {1, 2, 3}, // linha 0
        {4, 5, 6}, // linha 1
        {7, 8, 9}  // linha 2
    };
    int i, j; // variáveis que serão usadas pelo loop

    // apenas a primeira linha
    printf("imprimindo a primeira linha:\n");
    for (j = 0; j < 3; j++)
    {
        printf("%i ", mat[0][j]);
    }

    // pula pra uma nova linha para imprimir toda a matriz

    printf("\ntodas as linhas : \n");
    for (i = 0; i < 3; i++) // intera sobre a linha
    {
        for (j = 0; j < 3; j++) // intera sobre a coluna
        {
            printf("%i ", mat[i][j]);
        }
        // pula para uma nova linha após imprimir cada linha da matriz
        printf("\n");
    }
    return 0;
}