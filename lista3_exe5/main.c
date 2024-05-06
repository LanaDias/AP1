#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, op;
    //coleta de dados
    printf("Digite um numero inteiro:");
    scanf("%i", &num1);
    printf("Digite outro numero inteiro:");
    scanf("%i", &num2);

    //soma
    op = num1 + num2;
    printf("soma: %i", op);

    //sub
    op = num1 - num2;
    printf("\nsubtração: %i", op);

    //mult
    op = num1 * num2;
    printf("\nmultiplicação: %i", op);

    //div
    op = num1 / num2;
    printf("\ndivisão: %i", op);

    return 0;
}
