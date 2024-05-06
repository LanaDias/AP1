#include <stdio.h>
#include <stdlib.h>

int main()
{
    float media, n1, n2, n3 ;
    //coleta de dados
    printf("digite nota 1:");
    scanf("%f", &n1);
    printf("digite nota 2:");
    scanf("%f", &n2);
    printf("digite nota 3:");
    scanf("%f", &n3);

    //media
    media = (n1 + n2 + n3) / 3;
    printf("\n a media é: %.1f", media);

    return 0;
}
