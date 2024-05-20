#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
//entrada de dados
    printf("digite um numero: ");
    scanf("%i", &num);

    switch (num)
    {
    case 1:
        printf("Janeiro");
        break;
    case 2:
        printf("fevereiro");
        break;
    case 3:
        printf("marco");
        break;
    case 4:
        printf("abril");
        break;
    case 5:
        printf("Maio");
        break;
    case 6:
        printf("Junho");
        break;
    case 7:
        printf("julho");
        break;
    case 8:
        printf("agosto");
        break;
    case 9:
        printf("setembro");
        break;
    case 10:
        printf("outubro");
        break;
    case 11:
        printf("novembro");
        break;
    case 12:
        printf("Dezembro");
        break;
    default:
        printf("Ivalido");


    }
    return 0;
}
