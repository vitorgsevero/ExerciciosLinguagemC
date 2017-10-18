#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
int i,j;
int Ma[2][2];
int Mb[2][2];
int Mr[2][2];

printf("Matriz [A]\n");

for(i=0;i<2;i++){
 for(j=0;j<2;j++){

   do {
    printf("O Programa so aceita valores positivos: ");
    scanf("%d",&Ma[i][j]);
  }while(Ma[i][j]<0);
 }
}
for(i=0;i<2;i++){
 for(j=0;j<2;j++){
  printf("%d ",Ma[i][j]);
 }
printf("\n");
}
for(i=0;i<2;i++){
 for(j=0;j<2;j++){
    Mb[i][j]=2;
  }
 }

printf("Matriz [B]\n");

for(i=0;i<2;i++){
 for(j=0;j<2;j++){
   printf("%d ",Mb[i][j]);
  }
  printf("\n");
 }

printf("Matriz [R] \n");

for(i=0;i<2;i++){
 for(j=0;j<2;j++){
  Mr[i][j]=Ma[i][j]/Mb[i][j];
  printf("%d ",Mr[i][j]);
 }
printf("\n");
 }
}
