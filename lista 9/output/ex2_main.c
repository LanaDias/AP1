#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char invertida[100];
    int palindromo = 1;

    // Ler a string do usuário
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remover o caractere de nova linha

    int len = strlen(str);

    // Inverter a string
    for (int i = 0; i < len; i++) {
        invertida[i] = str[len - i - 1];
    }
    invertida[len] = '\0'; // Adicionar o terminador nulo

    printf("String invertida: %s\n", invertida);

    // Verificar se é um palíndromo
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            palindromo = 0;
            break;
        }
    }

    if (palindromo) {
        printf("A string e um palindromo.\n");
    } else {
        printf("A string nao e um palindromo.\n");
    }

    return 0;
}