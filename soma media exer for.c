#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{/*6. Desenvolva um programa que receba 7 valores inteiros, calcule e mostre a soma e a média
dos números informados. */

    int i,n1,soma,somaa;

        soma=0;

    for (i=1;i<=7;i++){

        printf("Informe um numero:");
        scanf("%d",&n1);

        soma = soma + n1;
        somaa = 7*n1;
    }

    printf("Media: %.2f\n",(soma*1.0/7));
    printf("Soma: %.2f\n",somaa);

getch();
}
