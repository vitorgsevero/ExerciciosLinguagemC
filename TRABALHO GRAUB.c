#include <stdio.h>
#include <stdlib.h>
void main()
{
int primeiraClasse[5], classeMadia[5],i,cont,cont2;


cont2=4;
//Atribuindo 0 para a memoria do vetor 1
primeiraClasse[0]=0;
primeiraClasse[1]=0;
primeiraClasse[2]=0;
primeiraClasse[3]=0;
primeiraClasse[4]=0;
//Atribuindo 0 para a memoria do vetor 1
 classeMadia[0]=0;
 classeMadia[1]=0;
 classeMadia[2]=0;
 classeMadia[3]=0;
 classeMadia[4]=0;

do{
printf("Em qual dos aviões você ira voar ?\navião 1 ou 2 \naperte 3 para sair do programa\n");//escolha dos aviões
scanf("%d",&i);
if(i != 1 && i != 2)//opção não encontrada!
{
printf("Opçao nao encontrada \n");
}
if(i == 1)//aviao1
{
do{//menu de escolha
printf("Favor digitar 1 para primeira classe \nFavor digitar 2 para classe econômica \nFavor digitar 3 para visualizar a ocupação dos aviões \nFavor digitar 4 para sair \n");
scanf("%d",&i);
		//opção 1 primeira classe
		if(i == 1){

            if(cont<=4){

			if(cont==0){
            primeiraClasse[0]=i;}
            cont+1;
            if(cont==1){
            cont+1;
            primeiraClasse[1]=i;}
            if(cont==2){
            cont+1;
            primeiraClasse[2]=i;}
            if(cont==3){
            cont+1;
            primeiraClasse[3]=i;}
            if(cont==4){
            cont+1;
            primeiraClasse[4]=i;}
            printf("Assento reservado na primeira classe, Assento %d\n",cont);
		    cont = cont + 1;
           }else{printf("Todos os assentos estao ocupados\n"); }
             }
        //opção 2 economica
			if(i == 2){

            if(cont2<=9){
            if(cont2==4){
            classeMadia[0]=i=1;}
            cont2+1;
            if(cont2==5){
            cont2+1;
            classeMadia[1]=i=1;}
            if(cont2==6){
            cont2+1;
            classeMadia[2]=i=1;}
            if(cont2==7){
            cont2+1;
            classeMadia[3]=i=1;}
            if(cont2==8){
            cont2+1;
            classeMadia[4]=i=1;}
            printf("Assento reservado na primeira classe, Assento %d\n",cont2);
		    cont2= cont2+1;
           }else{printf("Todos os assentos estao ocupados\n"); }
             }
       //opção 3 visualizar as classes
           if(i == 3){
                //avião 1
				printf("AVIAO 1:Assento 0: %d pessoa\n",primeiraClasse[0]);
                printf("AVIAO 1:Assento 1: %d pessoa\n",primeiraClasse[1]);
                printf("AVIAO 1:Assento 2: %d pessoa\n",primeiraClasse[2]);
                printf("AVIAO 1:Assento 3: %d pessoa\n",primeiraClasse[3]);
                printf("AVIAO 1:Assento 4: %d pessoa\n\n\n",primeiraClasse[4]);
                //avião 2
                printf("AVIAO 2:Assento 0: %d pessoa\n",classeMadia[0]);
                printf("AVIAO 2:Assento 1: %d pessoa\n",classeMadia[1]);
                printf("AVIAO 2:Assento 2: %d pessoa\n",classeMadia[2]);
                printf("AVIAO 2:Assento 3: %d pessoa\n",classeMadia[3]);
                printf("AVIAO 2:Assento 4: %d pessoa\n\n",classeMadia[4]);
             }

//repetição
}while(i!=4);
}
if(i == 2)//aviao 2
{
do{//menu de escolha
printf("Favor digitar 1 para primeira classe \nFavor digitar 2 para classe econômica \nFavor digitar 3 para visualizar a ocupação dos aviões \nFavor digitar 4 para sair \n");
scanf("%d",&i);
//opção 1 primeira classe
		if(i == 1){

            if(cont<=4){

			if(cont==0){
            primeiraClasse[0]=i;}
            cont+1;
            if(cont==1){
            cont+1;
            primeiraClasse[1]=i;}
            if(cont==2){
            cont+1;
            primeiraClasse[2]=i;}
            if(cont==3){
            cont+1;
            primeiraClasse[3]=i;}
            if(cont==4){
            cont+1;
            primeiraClasse[4]=i;}
            printf("Assento reservado na primeira classe, Assento %d\n",cont);
		    cont = cont + 1;
           }else{printf("Todos os assentos estao ocupados\n"); }
             }
        //opção 2 economica
			if(i == 2){

            if(cont2<=9){
            if(cont2==4){
            classeMadia[0]=i=1;}
            cont2+1;
            if(cont2==5){
            cont2+1;
            classeMadia[1]=i=1;}
            if(cont2==6){
            cont2+1;
            classeMadia[2]=i=1;}
            if(cont2==7){
            cont2+1;
            classeMadia[3]=i=1;}
            if(cont2==8){
            cont2+1;
            classeMadia[4]=i=1;}
            printf("Assento reservado na primeira classe, Assento %d\n",cont2);
		    cont2= cont2+1;
           }else{printf("Todos os assentos estao ocupados\n"); }
             }
       //opção 3 visualizar as classes
           if(i == 3){
                //avião 1
				printf("AVIAO 1:Assento 0: %d pessoa\n",primeiraClasse[0]);
                printf("AVIAO 1:Assento 1: %d pessoa\n",primeiraClasse[1]);
                printf("AVIAO 1:Assento 2: %d pessoa\n",primeiraClasse[2]);
                printf("AVIAO 1:Assento 3: %d pessoa\n",primeiraClasse[3]);
                printf("AVIAO 1:Assento 4: %d pessoa\n\n\n",primeiraClasse[4]);
                //avião 2
                printf("AVIAO 2:Assento 0: %d pessoa\n",classeMadia[0]);
                printf("AVIAO 2:Assento 1: %d pessoa\n",classeMadia[1]);
                printf("AVIAO 2:Assento 2: %d pessoa\n",classeMadia[2]);
                printf("AVIAO 2:Assento 3: %d pessoa\n",classeMadia[3]);
                printf("AVIAO 2:Assento 4: %d pessoa\n\n",classeMadia[4]);
             }
//repetição
}while(i!=4);
}
}while(i!=3);
}
