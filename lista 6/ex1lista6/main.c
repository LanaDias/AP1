#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, re;
    char operador;
    //entrada de numero escolhido pelo user
    printf("digite dois numemro:\n");
    scanf("%f %f", &num1, &num2);

    //entrada de operador escolhido pelo user
    printf("escolha operador: ( + , - , * , / )");
    scanf(" %c", &operador);

    //casos que o user pode escolher
    switch (operador )
    {

    case '+':
        re = num1 + num2;
        printf("%.2f + %.2f = %.2f\n", num1, num2, re);
        break;

    case '-':
        re = num1 - num2;
        printf("%.2f - %.2f = %.2f\n", num1, num2, re);
        break;
    case '*':
        re = num1 * num2;
        printf("%.2f * %.2f = %.2f\n", num1, num2, re);
        break;
    case '/':
        re = num1 / num2;
        printf("%.2f / %.2f = %.2f\n", num1, num2, re);
        break;
    default: //caso ele não escolha nenhuma das opçoes acima
        printf("invalido");

    }
    return 0;
}
