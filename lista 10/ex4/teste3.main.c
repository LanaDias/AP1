#include <stdio.h>

int main()
{
    int mat[2][2];
    int i, j;
    int soma = 0;

    //Entrada de dados do user 
    printf("Digite os valores para a matriz 2X2: \n");
    for (i = 0; i < 2; i++) //intera sobre a linha 
    {
        for (j = 0; j < 2; j++)//intera sobre a coluna 
        {
            printf("Elemento [%i][%i]: ", i, j);
            scanf("%i", &mat[i][j]);
        }
    }

    //imprimir elementos da matriz

    printf("elementos da matriz:\n");
    for (i = 0; i < 2; i++) //intera sobre a linha 
    {
        for (j = 0; j < 2; j++) // intera sobre a coluna 
        {
            printf("%i ", mat[i][j]);
        }
        printf("\n");
    }

    // calcular a soma de todos os elmentos da matriz
    
    for (i = 0; i < 2; i++) // intera sobre a linha 
    {
        for (j = 0; j < 2; j++) // intera sobre a coluna 
        {
            soma += mat[i][j];
            /*a soma é inicializada em zero, quando ocorre primeira integração a soma recebe o primeiro valor da matriz e soma ao seu, assim tendo  um novo valor. Na segunda integração, e agora com um novo valor, a soma recebe o segundo valor da matriz e soma ao seu novo valor, e assim sucessivamente até que se encerre o laço*/
        }
    }

    // para imprimir a soma da matriz
    printf("A Soma dos elementos da matriz e: %i\n", soma);

    return 0;
}