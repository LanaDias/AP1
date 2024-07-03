#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10];
    int i;

//entrada dos 10 numeros
    for(i=0; i<10; i++)
    {
        printf("Digite o numero %i: ", i+1);
        scanf("%i", &vetor[i]);
    }

    //ordem dos numeros inverta
    printf("\nNa ordem invera: \n");
    for(i=9; i>=0; i--)
    {
        printf("%i ", vetor[i]);
    }
    printf("\n");

    return 0;
}
