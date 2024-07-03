#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int numVogais = 0;
    int j = 0;

    // Ler a string do usuário
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remover o caractere de nova linha

    // Remover vogais da string e contar número de vogais
    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            numVogais++;
        } else {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; // Adicionar o terminador nulo

    printf("String sem vogais: %s\n", str);
    printf("Numero de vogais na string original: %d\n", numVogais);

    return 0;
}
