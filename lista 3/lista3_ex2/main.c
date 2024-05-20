#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f,c;
    //coleta de dados
    printf("digite a temperatura em Celsius:");
    scanf("%f", &c);
    f = (c * 9/5) + 32;
    printf("A temperatura em Fahrenheit: %f", f);


    return 0;
}
