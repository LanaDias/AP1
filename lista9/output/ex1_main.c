#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char frase[1000];
    int num_palavras = 0, num_caracteres = 0;
    int i;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    
    // Remove o newline da string
    frase[strcspn(frase, "\n")] = '\0';

    // Contar o número de palavras
    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ') {
            num_palavras++;
        }
        num_caracteres++;
    }
    num_palavras++; // Contar a última palavra

    // Exibir a frase em maiúsculas
    printf("Frase em maiúsculas: ");
    for (i = 0; frase[i] != '\0'; i++) {
        putchar(toupper(frase[i]));
    }
    printf("\n");

    // Exibir a frase em minúsculas
    printf("Frase em minúsculas: ");
    for (i = 0; frase[i] != '\0'; i++) {
        putchar(tolower(frase[i]));
    }
    printf("\n");

    printf("\nResultados:\n");
    printf("Número de palavras: %d\n", num_palavras);
    printf("Número de caracteres: %d\n", num_caracteres);

    return 0;
}
