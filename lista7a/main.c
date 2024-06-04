#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char op;
    int idade, contador = 0,total_idade= 0;
    float media;

    printf("MENU:\n");
    printf("a) calcular media de idades\n");
    printf("b) sequencia de fibonacci\n");
    printf("c) numeros primos\n");
    printf("Digite a alternativa: ");
    scanf(" %c", &op);

    system("cls"); // para limpar tela

    switch (op)
    {
    case 'a': // media das idades
        do
        {
            printf("Digite sua idade (para sair digite um numero negativo):");
            scanf("%i", &idade);

            if(idade>=0)
            {

                total_idade += idade; // para somar as idades

                contador ++; // para continuar repetindo ate que o user digite um numero negativo

            }
        }
        while(idade>=0);
        media = total_idade / (float)contador; // calculo da media e converssão do contador de int para float
        printf("\na soma das idades e = %i\n", total_idade);
        printf("a media e = %.2f\n ", media);
        break;

    case 'b': //sequencia de fibonacci
    {

        int n, proxtermo, t1 =0, t2 = 1;

        printf("digite um numero inteiro para a Sequencia de Fibonacci:");
        scanf("%i", &n);

        printf("Sequencia de fibonacci ate %i: \n", n);

        while (n >0) // o loop continuará enquanto o valor de n for maior que zero.
        {
            printf("%i ",t1 );
            proxtermo = t1 + t2; // para calcular ao proximo termo
            t1 = t2 ; //atualizar t1
            t2 = proxtermo; //atualizar t2
            n--; //reduzir o valor de n para o proximo termo calculado

        }
        printf("\n");
    }
    break;

    case 'c'://verificar se numero e primo
    {
        int n, i, calculo = 0;

        printf("Digite um numero: ");
        scanf("%d", &n);

        if (n <= 1)
        {
            printf("%d nao e um numero primo.\n", n);
        }
        else
        {
            i = 2;
            while (i <= sqrt(n))
            {
                if (n % i == 0)
                {
                    calculo++;
                    break;
                }
                i++;
            }
            if (calculo == 0)
            {
                printf("%i e um numero primo.\n", n);
            }
            else
            {
                printf("%i nao e um numero primo.\n", n);

            }
        }
    }

    break;


    default:
        printf("Opção inválida!\n");
        break;

    }

    return 0;
}
