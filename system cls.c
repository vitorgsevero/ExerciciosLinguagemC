#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

main()
{
    int n;

    printf("Teste Limpeza...\n");
    printf("Informe um numero:");
    scanf("%d",&n);
    printf("Numero lido: %d",n);
    getch();
    system("cls");
    printf("Limpo!");
    getch();
}
