#include <stdio.h>
#include <stdlib.h>
int main (void)
{
int f,d,c,e;
do{
printf("Infotme ha quantidade de pessoas: ");
scanf("%d",&c);
}while (c <= 0);
f=0;
for (d=1;d<=c;d++)
{
for(f=d;f<=c;f++)
printf("-");
for(e=1;e<=d;e++)
printf("|-");
for(f=c-1;f>=d;f--)
printf("\n");
}
return 0;

}

