#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    int numeros;
    int contador;
    int maior, menor;
    int num, i;

    do
    {
        printf("Menu\n");
        printf("a) numeros pares\n");
        printf("b) numeros inteiros do maior para o menor\n");
        printf("c) tabuada\n");
        printf("4) para sair\n");
        printf("Escolha uma opcao: ");
        scanf(" %c", &op);

        switch(op)
        {
        case 'a':
            printf("Digite 5 numeros inteiros:\n");
            for(contador = 1; contador <= 5; contador++)
            {
                printf("Numero %i: ", contador);
                scanf("%i", &numeros);

                if (numeros % 2 == 0)
                {
                    printf("O numero %i e par.\n", numeros);
                }
            }
            break;

        case 'b':
            printf("digite 5 numeros inteiros: \n");
            for(contador = 1; contador<=5; contador++)
            {
                printf("numero %i:", contador);
                scanf("%i", &numeros);
                if(contador == 1)
                {
                    maior = menor = numeros;
                }
                else
                {
                    if(numeros > maior)

                    {
                        maior = numeros;
                    }
                    if (numeros < menor)
                    {
                        menor = numeros;
                    }
                }
            }
            printf("O maior numero e: %i\n", maior);
            printf("O menor numero e: %i\n", menor);
            break;

        case 'c':
            printf("digite um numero para a tabuada: ");
            scanf("%i", &num);
            printf("Tabuada do %i: \n", num);
            for(i=1; i<=10; i++)
            {
                printf("%i x %i = %i\n", num, i, num * i);
            }
            break;

        case '4':
            printf("Saindo do programa.\n");
            break;

        default:
            printf("Opção inválida.\n");
            break;
        }
    }
    while(op != '4');
    return 0;
}
