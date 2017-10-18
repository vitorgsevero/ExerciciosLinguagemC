#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

void main()
{
    int media,n1,n2,op;

        do{
        printf("Informe um numero: ");
        scanf("%d",&n1);
        printf("Informe outro numero: ");
        scanf("%d",&n2);

        media = (n1+n2)/2;

        printf("Sua media: %d\n",media);

        printf("Se voce deseja fazer a media entre duas notas digite 1.\n");
        printf("Se voce deseja sair digite 2.\n\n");
        scanf("%d",&op);

       } while (op!=2);








    getch();
}
