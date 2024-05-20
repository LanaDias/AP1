#include <stdio.h>
#include <stdlib.h>

int main()
{
    float horas;
    //entrada de dados
    printf("Digite as horas:");
    scanf("%f", &horas);

    //condiçoes
    if (horas >= 0 && horas <=11)
    {
        printf("Bom dia\n");
    }
    else if (horas >= 12 && horas <=17)
    {
            printf("boa tarde\n");
    }
    else
    {
        printf("boa noite\n");
    }
    return 0;
}
