#include<stdio.h>
#include<stdlib.h>
void main ()
{
int voto,contEin=0,contTur=0,contNulo=0,contBranco=0,i,j;
int v[2][2]={0};
do{
    printf("[1]Einstein [2]Turing [3]Nulo [4]Em Branco [5] para encerrar\n:");
    scanf("%d",&voto);
     switch(voto){
      case 1:
      v[0][0]=contEin=contEin+1;
     break;
      case 2:
     v[0][1]=contTur = contTur+1;
     break;
      case 3:
     v[1][0]=contNulo = contNulo+1;
     break;
       case 4:
      v[1][1]=contBranco = contBranco+1;
     break;
                 }
}while(voto != 5);
         printf("Einstein|Turing\n");
         for(i=0;i<2;i++){
         for(j=0;j<2;j++){
           printf(" %d ",v[i][j]);
           }
        printf("\nNulo |Embrenaco\n");
         }
}
