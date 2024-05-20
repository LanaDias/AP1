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

    printf("Seu IMC �: %.2f\n", imc);

    // Verifica a classifica��o do IMC
    if (imc < 18.5)
    {
        printf("Classifica��o: MAGREZA\n");
    }
    else if (imc >= 18.5 && imc <= 24.9)
    {
        printf("Classifica��o: NORMAL\n");
    }
    else if (imc >= 25.0 && imc <= 29.9)
    {
        printf("Classifica��o: SOBREPESO\n");
    }
    else if (imc >= 30.0 && imc <= 39.9)
    {
        printf("Classifica��o: OBESIDADE\n");
    }
    else
    {
        printf("Classifica��o: OBESIDADE GRAVE\n");
    }


    return 0;
}
