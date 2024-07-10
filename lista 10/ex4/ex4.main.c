#include <stdio.h>

int main()
{
    char nomes[3][50]; // Array para armazenar nomes dos alunos (até 49 caracteres cada)
    int mat[3][4];
    float media[3];
    int i, j;

    // Leitura dos dados
    for (i = 0; i < 3; i++) // linha
    {
        // Leitura dos nomes dos alunos
        printf("Digite o nome do aluno %i: ", i + 1);
        scanf("%s", nomes[i]);

        // Leitura das notas
        for (j = 0; j < 4; j++) // coluna
        {
            printf("Nota %i: ", j + 1);
            scanf("%i", &mat[i][j]);
        }
    }

    // Cálculo das médias
    for (i = 0; i < 3; i++)
    {
        int soma = 0;
        for (j = 0; j < 4; j++)
        {
            soma += mat[i][j];
        }
        media[i] = soma / 4.0;
    }

    // Exibição das médias
    for (i = 0; i < 3; i++)
    {
        printf("Media %s: %.2f\n", nomes[i], media[i]);
    }

    return 0;
}
