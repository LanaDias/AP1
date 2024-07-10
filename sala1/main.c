#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração de variaveis
    int numero; //%i
    float numeroReal; //%f
    char caractere; //%c
    double numeropreciso; // %lf

    const float pi = 3.14;
    /* vaariavel constante, outra maneira de incluir
    uma constante e incluir uma biblioteca ( #define pi 3.14)

*/
    scanf("%i", &numero); // & serve para alocar um espaço na memória para a var
    scanf("%f", &numeroReal);
    setbuf(stdin, NULL); //limpar buffer
    scanf("%c", &caractere);
    scanf("%lf", &numeropreciso);


    printf("\n numero inteiro: %i", numero);
    printf("\n numero real: %.2f", numeroReal);
    printf("\n caractere: %c", caractere);
    printf("\n numero preciso: %lf", numeropreciso);

    numero = 10;
    numeropreciso = 10.5;
    caractere = 'a';
    numeropreciso = 5.11;

    printf("\n numero inteiro: %i", numero);
    printf("\n numero real: %f", numeroReal);
    printf("\n caractere: %c", caractere);
    printf("\n numero preciso: %lf", numeropreciso);

    return 0;
}
