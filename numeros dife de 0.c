/*Fa�a um programa C que l� n�meros inteiros do usu�rio, enquanto n�o for informado o valor zero.
 Ap�s a leitura dos n�meros, informe o maior e o menor n�mero lido.*/

 #include <stdio.h>
 #include <stdlib.h>

 void main(){

 int num, menor, maior;

    printf("Informe um numero inteiro: ");
    scanf("%d",&num);

 do{

    printf("Informe um numero inteiro: ");
    scanf("%d",&num);

    if (num > maior){
        maior = num;}
    if (num < menor){
        menor = num;}

 }while(num!=0);

    printf("\nMaior: %d\n",maior);
    printf("Menor: %d\n",menor);

   system("pause");
 }


