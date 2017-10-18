#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int numero_linhas,linha,a,i,j;
    char m[5][5];

    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            m[i][j]='*';
        }

    }
    do{
        printf("Digite o numero de linhas desejado (max5):");
        scanf("%d",&numero_linhas);
      }while(numero_linhas<=0 || numero_linhas>5);

        linha = 1;
        while (linha<=numero_linhas)
        {
            a = 1;
            while (a<=linha)
            {
                m[linha-1][a-1]='*';
                a=a +1;
            }
            linha = linha + 1;

        }

        for (i=0;i<=numero_linhas-1;i++){
            for (j=0;j<=numero_linhas-1;j++)
            {
                printf("%c",m[i][j]);
            }
            printf("\n");
        }

    getch();
}
