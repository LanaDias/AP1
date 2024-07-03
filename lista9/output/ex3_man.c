#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char letraSubstituir;
    int j = 0;

    // Ler a string do usuário
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remover o caractere de nova linha

    // Remover espaços da string
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; // Adicionar o terminador nulo

    // Solicitar a letra a ser substituída
    printf("Digite a letra a ser substituida: ");
    scanf(" %c", &letraSubstituir);

    // Substituir todas a letra que o user escolher por '*'
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == letraSubstituir) {
            str[i] = '*';
        }
    }

    printf("String modificada: %s\n", str);

    return 0;
}

