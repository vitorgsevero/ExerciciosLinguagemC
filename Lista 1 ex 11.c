#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    /*12. Elabore um programa que leia 3 números inteiros, e os exiba na tela no seguinte
padrão:
|| número 1 || número 2 || número 3 ||*/

    int n1,n2,n3;

    printf("Informe um numero: ");
    scanf("%d",&n1);
    printf("Informe outro numero: ");
    scanf("%d",&n2);
    printf("Informe mais um numero: ");
    scanf("%d",&n3);

    printf("||%d",n1);
    printf("||%d",n2);
    printf("||%d",n3);
    printf("||");

    getch();
}
