#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

 void main()

{
    int dia;
    int mes;
    int ano;

    printf("Digite o dia de hoje: ");
    scanf("%d",&dia);

    printf("Digite o mes: ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    printf(" %d / %d / %d ", dia, mes, ano);

    getch();

    return 0
}
