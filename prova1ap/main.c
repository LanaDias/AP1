#include <stdio.h>


#include <stdlib.h>
//codigo calcular valor de desconto, prova

int main()
{
    //var
    float valor_compra, calculo;
    char cupom;
    float desconto = 0.0;

    //entada do valor total da compra
    printf("Digite o valor total da compra: ");
    scanf ("%f", &valor_compra);

    //condição caso valor da compra seja positivo
    if (valor_compra >=0)
    {

        //entrada do valor do cupom de desconto
        printf("digite o cupom (a, b, c, d, e,): ");
        scanf(" %c", &cupom); // espaço antes do %c para ignorar espaço em branco

        //verificação do desconto com switch case
        switch (cupom)
        {
        case 'a':

            desconto = 0.10; // 10% de desconto
            break;

        case 'b':
            desconto = 0.20; // 20% de desconto
            break;

        case 'c':
            desconto = 0.30; // 30% de desconto
            break;

        case 'd':
            desconto = 0.40; // 40% de desconto
            break;

        case 'e':
            desconto = 0.50; // 50% de desconto
            break;

        default: // caso o user digite algo diferente de a, b, c, d, e.

            printf("\nCupom invalido,as opcoes sao: (a, b, c, d, e)\n");

        }

        system("cls"); // para limpar o que tinha anteriormente na tela e depois mostrar apenas a nota fiscal

        //DADOS DA COMPRA E CALCULOS:

        printf("NOTA FISCAL");

        //valor da compra sem desconto
        printf("\nvalor total (sem desconto): R$%.2f\n", valor_compra );

        //cupom e seu valor
        printf("cupom:  %c  com %.2f(%%) de desconto", cupom, desconto);

        // calculo do valor do desconto
        float valor_desconto = (desconto * valor_compra);
        printf("\nvalor do desconto: R$%.2f\n", valor_desconto);

        //valor final
        float valor_final = valor_compra - valor_desconto ;
        printf("Valor final (com desconto): R$%.2f\n", valor_final);
    }


    else // caso valor da compra seja negativo
    {
        printf("Valor da compra invalido :(\n");
    }

    return 0;
}
