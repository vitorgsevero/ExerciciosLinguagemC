#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    float real, dolar;
    int cont;

    cont = 1;
    printf("\n*****************************************************************");
    printf("\n  Bem-Vindo ao programa que converte valores de Real para Dolar!\n");
    printf("*****************************************************************\n");
    do{

    printf("\n\nQual o valor em R$?\n");
    scanf("%f",&real);

    dolar = real*2.20;

    printf("O valor convertido foi U$ \n%f",dolar);

    cont = cont + 1;

    }

    while(cont<=4);



    getch();
}
