#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{/*1. Desenvolva um programa que mostre na tela somente os números pares entre 2 e 100
(inclusive). */
    int n;


    while(n>2 && n<=100) {

        if (n%2==0){
        printf("%d",n+2);
    }
    }

getch();

}
