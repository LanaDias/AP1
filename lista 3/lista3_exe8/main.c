#include <stdio.h>
#include <stdlib.h>

int main()
{
    float metros, cent, mili;

    printf("Digite o valor em metros");
    scanf("%f", &metros);

    // metros para centimetros
    cent = metros * 100;
    // metros para milimetros
    mili = metros * 1000;

    printf("\n%.2f metros equivalem a %.2f cent�metros e %.2f mil�metros.\n", metros, cent, mili);
    return 0;
}
