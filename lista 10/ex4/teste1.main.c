#include <stdio.h>

int main()
{
    int matriz[3][3];
//linha 0
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;

//linha 1 
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;

//linha 2
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;

printf("%i %i %i", matriz[0][0], matriz[0][1],matriz[0][2]); // para imprimir a primeira linha da matriz
    return 0;
}