#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float raio, pi, area ;

    printf("digite o valor do raio");
    scanf("%f", &raio);
    pi = 3.14;
    area = pi * pow(raio, 2);

    printf("a �rea do circulo � : %f", area);


    return 0;
}
