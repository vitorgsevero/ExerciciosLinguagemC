#include<stdio.h>
#include<stdlib.h>
void main(){
int i,j,a[2][2],b[2][2]={2},r[2][2];
for(i=0;i<2;i++){
  for(j=0;j<2;j++){
   do{
    printf("Infrome um valor positivo: ");
    scanf("%d",&a[i][j]);
   }while(a[i][j]<0);

  }
 }
for(i=0;i<2;i++){
  for(j=0;j<2;j++){
   b[i][j]=2;
   r[i][j]=a[i][j]%b[i][j];
  }
 }
for(i=0;i<2;i++){
  for(j=0;j<2;j++){
   r[i][j]=a[i][j]%b[i][j];
  }
 }
 for(i=0;i<2;i++){
   for(j=0;j<2;j++){
   printf("%d ",r[i][j]);
  }
 printf("\n");
 }
}
