#include <stdio.h>

int main() {
    int mat[3][3];
    int i, j, k, ord;

    // Leitura dos valores da matriz

    printf("Digite os valores da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor para a posicao [%d][%d]: ", i + 1, j + 1); // soma 1 para o usuário ver a posição começando em 1
            scanf("%d", &mat[i][j]);
        }
    }

    // para colocar em ordem os numeros 

    for (k = 0; k < 9 - 1; k++) {
        for (i = 0; i < 9 - k - 1; i++) {
            if (mat[i / 3][i % 3] > mat[(i + 1) / 3][(i + 1) % 3]) {
                // Troca os elementos
                ord = mat[i / 3][i % 3];
                mat[i / 3][i % 3] = mat[(i + 1) / 3][(i + 1) % 3];
                mat[(i + 1) / 3][(i + 1) % 3] = ord;
            }
        }
    }

    // Impressão da matriz ordenada
    
    printf("\nMatriz 3x3 ordenada:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("[%02d] ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
