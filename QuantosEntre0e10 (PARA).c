#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main ()
{
    int c,v,Tot010;

    Tot010 = 0;

    for (c=1; c<=6;c++){
       printf("Digite um valor: ");
       scanf("%d",&v);

       if (v>=0 && v<=10){
        Tot010 = Tot010 + 1;
       }
    }

    printf("valores entre 0 e 10: %d",Tot010);

    getch();
}
