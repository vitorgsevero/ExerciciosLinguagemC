#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main ()
{
    int numero;
    /*Fazendo a exibição na tela*/
    printf("Programa em C que recebe um número e informa se par ou impar!\n\n");

    printf("Informe um numero inteiro positivo:\n");
    scanf("%d",&numero);

    if (numero%2==0){
        printf("\nO numero informado eh par: %d\n", numero);}

    if (numero%2!=0){
        printf("\nO numero informado eh impar: %d\n", numero);}

    getch();
}
