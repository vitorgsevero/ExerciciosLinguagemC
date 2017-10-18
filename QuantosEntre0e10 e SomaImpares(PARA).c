#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main ()
{
   int c,v,Tot010, SomaImpar;

    Tot010 = 0;
    SomaImpar = 0;

    for (c=1; c<=6;c++){
       printf("Digite um valor: ");
       scanf("%d",&v);

       if (v>=0 && v<=10){
        Tot010 = Tot010 + 1;
       }

       if (v%2!=0){
        SomaImpar = SomaImpar + v;
       }
    }

    printf("\nValores entre 0 e 10:\n %d",Tot010);
    printf("\nSoma dos valores impares:\n %d",SomaImpar);

    getch();
}
