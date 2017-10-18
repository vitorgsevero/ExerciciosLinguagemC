#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int w[10],i,j;
    for (i=0;i<10;i=i+2)
        w[i] = i*2;
    for (j=i;j>0;j--)
    {
        if (j%2!=0)
        w[j] = w[j-1];
    }
    getch();
}
