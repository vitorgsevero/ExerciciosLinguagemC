#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void main()
{
    int v[5],i,tot;

    for (i=1;i<=5;i++){
        tot=v[i];
        v[i]=i;
        tot++;

    }

    printf("%d\n",tot);

    getch();
}
