#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[12];
    int dobro[12];
    int mult,i;

    //entrada do 12 numeros inteiros
    printf("digite 12 numero inteiros\n");
    for(i=0; i<12; i++)
    {
        printf("Numero %i: ", i+1);
        scanf("%i", &num[i]);
    }

    //dobro do vetor anterior com novo vetor
    for(i=0; i<12; i++)
    {
        dobro[i]= 2 * num[i];
    }

    //impressao do novo vetor
    printf("o dobro do vetor anterior: \n");
    for(i=0; i<12; i++)
    {
        printf("%i ", dobro[i]);
    }
    printf("\n");

    return 0;
}
