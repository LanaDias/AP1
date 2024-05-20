#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //var
    float imc, altura, peso;

    //coleta de dados
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);
    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);

    // Calcula o IMC
    imc = peso / pow(altura,2);

    printf("Seu IMC é: %.2f\n", imc);

    // Verifica a classificação do IMC
    if (imc < 18.5)
    {
        printf("Classificação: MAGREZA\n");
    }
    else if (imc >= 18.5 && imc <= 24.9)
    {
        printf("Classificação: NORMAL\n");
    }
    else if (imc >= 25.0 && imc <= 29.9)
    {
        printf("Classificação: SOBREPESO\n");
    }
    else if (imc >= 30.0 && imc <= 39.9)
    {
        printf("Classificação: OBESIDADE\n");
    }
    else
    {
        printf("Classificação: OBESIDADE GRAVE\n");
    }


    return 0;
}
