#include <stdio.h>
#include <stdlib.h>

int main()
{
    // criar calculadora que so calcula n�meros positivos

    float n1, n2, re;
    char operador;

    //dados do user
    printf("Digite dois numeros para serem calculados:\n");
    scanf("%f %f", &n1, &n2);
// operador
    printf("Digite um operador (+, -, *,/):\n");
    scanf(" %c", &operador);

    //tratamento de erro
    if (n1 <0 || n2< 0)
    {
        printf("INVALIDO");
    }

    else
    {
        switch (operador)
        {
        case '+':
            re = n1 + n2 ;
            printf("Resultado da soma: %.2f\n", re);
            break;

        case '-':
            re = n1 - n2;
            printf("subtra��o: %.2f", re);
            break;
        case '*':
            re = n1 * n2;
            printf("multiplica��o: %.2f", re);
            break;
        case '/':
            if (n2 !=0)
            {
                re = n1 / n2;
                printf("divis�o: %.2f", re);
            }
            else
            {
                printf("Erro: operador inv�lido.\n");
            }
            break;
        }

    }
    return 0;
}
