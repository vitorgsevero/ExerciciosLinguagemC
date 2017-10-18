#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int salto, valor, cont;

    cont = 0;

    printf("Voce quer contar ate quanto?\n");
    scanf("%d",&valor);
    printf("Qual sera o salto entre cada valor?\n");
    scanf("%d",&salto);

    do {

        printf("%d",&cont);

        cont = cont + salto;

    }

    while(cont=valor);

    printf("Terminei a minha contagem!\n");

    getch();
}
