#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i1, i2, i3;
    float media;

    printf("Digite as três idades:");
    scanf("%i%i%i",&i1, &i2, &i3);
    //calculo
    media = (i1+i2+i3)/3;
    printf("a media é :%.1f", media);
    return 0;
}
