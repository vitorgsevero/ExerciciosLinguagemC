#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    /*Faça um programa que receba dois números, e mostre o maior e o menor. Caso tenha números iguais, informe que são iguais*/

     int n1,n2;

     printf("Informe um numero:");
     scanf("%d",&n1);
     printf("Informe outro numero:");
     scanf("%d",&n2);

     if (n1==n2){
        printf("Numeros iguais.");
    }


     if (n1>n2){
        printf("Maior numero:%d\n",n1);
        printf("Menor numero:%d\n",n2);
     }

     if (n2>n1){
        printf("Maior numero:%d\n",n2);
        printf("Menor numero:%d\n",n1);
     }

    getch();
}
