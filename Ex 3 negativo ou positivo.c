#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
   /*Faça um programa que informa se um número inteiro lido é positivo ou negativo. Caso ele seja igual a zero, informe que ele não é positivo nem negativo*/

    int numero;

    printf("Informe um numero: ");
    scanf("%d",&numero);

    if(numero>0){
        printf("Positivo.");
    }
    if (numero<0){
        printf("Negativo.");
    }
    if (numero==0){
        printf("Nem positivo nem negativo.");
    }


    getch();
}
