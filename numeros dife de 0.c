/*Faça um programa C que lê números inteiros do usuário, enquanto não for informado o valor zero.
 Após a leitura dos números, informe o maior e o menor número lido.*/

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


