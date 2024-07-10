#include <stdio.h>
#include <string.h>

int main()
{
    char matriz[3][3][50]; // Matriz 3x3 para armazenar nomes com até 50 caracteres cada
    int i, j;// variáveis para os laços

    // Lê os nomes e armazena na matriz
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o nome para a posicao (%d, %d): ", i, j);
            scanf("%49s", matriz[i][j]); // Lê o nome com no máximo 49 caracteres
        }
    }

    // para exibir a matriz
    printf("\nMatriz 3x3: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%s\t", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
