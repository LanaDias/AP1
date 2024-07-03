#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num [5];
    float media;
    int soma;
    int i;

    for(i=0; i<5; i++)
    {
        printf("digite numeros %i ", i+1);
        scanf("%f", &num[i]);
        soma += num[i];
    }
    media = soma/5;
    printf("a media e: %.2f ", media);

    return 0;
}
