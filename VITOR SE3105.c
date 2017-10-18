#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

void main (){

/*Alterando a cor do fundo/letra e colocando os acentos em português*/

    setlocale(LC_ALL, "Portuguese");
    system("color 0F");

int FirstClass[5], EconomyClass[5], FirstClass2[5], EconomyClass2[5], contadorA1, contadorA2, contadorB1, contadorB2, a;


/*Inicializando dois contadores para cada avião e os do Avião 1 inicializam em 1 e os do Avião 2 inicializam em 6*/

contadorA1 = 1;         contadorB1 = 1;
contadorA2 = 5;         contadorB2 = 5;

/*ATRIBUIÇÃO DO VALOR 0 PARA A MEMÓRIA DOS VETORES DE CADA AVIÃO DISPONÍVEL*/

FirstClass[0] = 0;
FirstClass[1] = 0;
FirstClass[2] = 0;
FirstClass[3] = 0;
FirstClass[4] = 0;

EconomyClass[0] = 0;
EconomyClass[1] = 0;
EconomyClass[2] = 0;
EconomyClass[3] = 0;
EconomyClass[4] = 0;


FirstClass2[0] = 0;
FirstClass2[1] = 0;
FirstClass2[2] = 0;
FirstClass2[3] = 0;
FirstClass2[4] = 0;

EconomyClass2[0] = 0;
EconomyClass2[1] = 0;
EconomyClass2[2] = 0;
EconomyClass2[3] = 0;
EconomyClass2[4] = 0;


    do{
            setlocale(LC_ALL, "Portuguese");
            system("color 0F");


        printf("Bem-vindo ao menu de escolha!\n\n");
        printf("Escolha o aviao desejado para a alocacao do seu assento:\n\n");
        printf("Digite 1 para o primeiro aviao ou 2 para o segundo aviao. \n\n");
        printf("Se voce deseja sair do programa, digite 4: \n\n");
        scanf("%d", &a);

        if (a!=1 && a!=2 && a!=4){
            printf("Opcao nao encontrada.\n\n");
}

if (a==1){/*AVIÃO 1*/
do{
    printf("Por Favor, digite 1 para Primeira Classe e 2 para Classe Economica!\n");
    printf("Por Favor, digite 3 se voce deseja ver a ocupacao das poltronas ou 4 para sair.\n\n\n");
    scanf("%d",&a);

    if (a==1){/*comando executados se a compra for na Primeira Classe*/

            if (contadorA1<=5){
                    if (contadorA1==1){
                    FirstClass[0]=a;}
                contadorA1+1;
                if (contadorA1==2){
                    FirstClass[1]=a;}
                contadorA1+1;
                if (contadorA1==3){
                    FirstClass[2]=a;}
                contadorA1+1;
                if (contadorA1==4){
                    FirstClass[3]=a;}
                contadorA1+1;
                if (contadorA1==5){
                    FirstClass[4]=a;}
                contadorA1+1;

                printf("Poltrona reservada na Primeira Classe, Aviao 1. Poltrona: %d \n\n", contadorA1); }
                contadorA1 = contadorA1+1;

            }else{
                printf("Todos os assentos estão reservados!\n\n");
                system("cls");
                }


            if (a==2){/*comando executados se a compra for na Classe Econômica*/

                if (contadorA2<10){
                    contadorA2 = contadorA2+1;
                if (contadorA2==6){
                    EconomyClass[0]=1;}
                    contadorA2+1;
                if (contadorA2==7){
                    EconomyClass[1]=1;}
                    contadorA2+1;
                if (contadorA2==8){
                    EconomyClass[2]=1;}
                    contadorA2+1;
                if (contadorA2==9){
                    EconomyClass[3]=1;}
                    contadorA2+1;
                if (contadorA2==10){
                    EconomyClass[4]=1;}
                    contadorA2+1;

                    } printf("Poltrona reservada na Primeira Classe, Aviao 1. Poltrona: %d \n\n", contadorA2);

                }else{
                    printf("Todos os assentos estao reservados! \n\n");}


            if (a==3) {/*Visualização da ocupação de poltronas*/

                    printf("AVIAO 1! \n\n");
                    printf("ASSENTOS DO AVIAO 1 DA PRIMEIRA CLASSE! \n");
                    printf("Assento 1: %d pessoas \n",FirstClass[0]);
                    printf("Assento 2: %d pessoas \n",FirstClass[1]);
                    printf("Assento 3: %d pessoas \n",FirstClass[2]);
                    printf("Assento 4: %d pessoas \n",FirstClass[3]);
                    printf("Assento 5: %d pessoas \n",FirstClass[4]);

                    printf("\n\n");

                    printf("ASSENTOS DO AVIAO 2 DA CLASSE ECONOMICA! \n");
                    printf("Assento 6: %d pessoas \n", EconomyClass[0]);
                    printf("Assento 7: %d pessoas \n", EconomyClass[1]);
                    printf("Assento 8: %d pessoas \n", EconomyClass[2]);
                    printf("Assento 9: %d pessoas \n", EconomyClass[3]);
                    printf("Assento 10: %d pessoas \n", EconomyClass[4]);
            }

}while(a!=4);

}



if (a==2){/*AVIÃO 2*/



    do{
    printf("Por Favor, digite 1 para Primeira Classe e 2 para Classe Economica!\n\n");
    printf("Por Favor, digite 3 se voce deseja ver a ocupação das poltronas ou 4 para sair!\n\n");
    scanf("%d",&a);

    if (a==1){/*comando executados se a compra for na Primeira Classe do Segundo Avião*/

            if (contadorB1<=5){
                    if (contadorB1==1){
                    FirstClass2[0]=a;}
                contadorB1+1;
                if (contadorB1==2){
                    FirstClass2[1]=a;}
                contadorB1+1;
                if (contadorB1==3){
                    FirstClass2[2]=a;}
                contadorB1+2;
                if (contadorB1==4){
                    FirstClass2[3]=a;}
                contadorB1+1;
                if (contadorB1==5){
                    FirstClass2[4]=a;}
                contadorB1+1;

                printf("Poltrona reservada na Primeira Classe, Aviao 1. Poltrona: %d \n", contadorB1); }
                contadorB1 = contadorB1+1;

            }else{
                printf("Todos os assentos estao reservados! \n");
                system("cls");
                }


            if (a==2){/*comando executados se a compra for na Classe Econômica*/

                if (contadorB2<10){
                    contadorB2 = contadorB2+1;
                if (contadorB2==6){
                    EconomyClass2[0]=1;}
                    contadorB2+1;
                if (contadorB2==7){
                    EconomyClass2[1]=1;}
                    contadorB2+1;
                if (contadorB2==8){
                    EconomyClass2[2]=1;}
                    contadorB2+1;
                if (contadorB2==9){
                    EconomyClass2[3]=1;}
                    contadorB2+1;
                if (contadorB2==10){
                    EconomyClass2[4]=1;}
                    contadorB2+1;

                    } printf("Poltrona reservada na Primeira Classe, Aviao 1. Poltrona: %d \n", contadorB2);

                }else{
                    printf("Todos os assentos estao reservados! \n");}


            if (a==3) {/*Visualização da ocupação de poltronas*/

                    printf("AVIAO 2! \n\n");
                    printf("ASSENTOS DO AVIAO DA PRIMEIRA CLASSE! \n");
                    printf("Assento 1: %d pessoa(as) \n",FirstClass2[0]);
                    printf("Assento 2: %d pessoa(as) \n",FirstClass2[1]);
                    printf("Assento 3: %d pessoa(as) \n",FirstClass2[2]);
                    printf("Assento 4: %d pessoa(as) \n",FirstClass2[3]);
                    printf("Assento 5: %d pessoa(as) \n",FirstClass2[4]);

                    printf("ASSENTOS DO AVIAO DA CLASSE ECONOMICA! \n");
                    printf("Assento 6: %d pessoa(as) \n", EconomyClass2[0]);
                    printf("Assento 7: %d pessoa(as)\n", EconomyClass2[1]);
                    printf("Assento 8: %d pessoa(as)\n", EconomyClass2[2]);
                    printf("Assento 9: %d pessoa(as) \n", EconomyClass2[3]);
                    printf("Assento 10: %d pessoa(as) \n\n", EconomyClass2[4]);
            }

}while(a!=4);
}
}while(a!=4);
}

