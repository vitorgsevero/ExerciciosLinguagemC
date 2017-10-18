#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{/*Faça um programa em C que leia dois números inteiros e informe: o dobro de cada um deles, e o dobro da soma dos dois.*/
    int n1,n2,dobro1,dobro2,dobrosoma;

    printf("Informe um numero inteiro: ");
    scanf("%d",&n1);
    printf("Informe outro numero inteiro: ");
    scanf("%d",&n2);

    dobro1 = 2*n1;
    dobro2 = 2*n2;
    dobrosoma = (n1+n2)*2;

    printf("Dobro do primeiro numero: %d\n",dobro1);
    printf("Dobro do segundo numero: %d\n",dobro2);
    printf("Dobro da soma entre os numeros: %d\n",dobrosoma);

    getch();
}
