#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main ()
{
    int ano, nasc, idade;

    printf("Programa em C que diz a idade que você completa/completou no presente ano. \n\n");
    printf("Digite o ano em que estamos: \n\n");
    scanf("%d",&ano);
    printf("Digite o ano em que voce nasceu: \n\n");
    scanf("%d",&nasc);

    idade =(ano - nasc);

    printf("\n A sua idade eh:%d\n", idade);
    printf("ENCERRANDO PROGRAMA... GOODBYE, OLD FRIEND.");

    getch ();
}
