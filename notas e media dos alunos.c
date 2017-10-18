#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

void main()
{
    int numl, linha, a;
    do{
        printf("Informe o numero de linhas (>0): ");
        scanf("%d",&numl);
    }while (numl<=0);
    for (linha = 1; linha <= numl; linha++)
    {
        printf("%d ******\n", linha);
        for(a=1;a<=linha;a++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}
