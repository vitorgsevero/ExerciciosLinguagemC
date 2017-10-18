#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
/*-------------------------------------------------------*/
struct Conta
{
    int numero;
    char nome[200];
    float saldo;
};

typedef struct Conta ContaBancaria;
ContaBancaria contas[10];

/*-------------------------------------------------------*/

void cadastrarConta(int *tot)
{
   if ((*tot) < 10)
   {
       printf("Informe o numero da conta:");
       scanf("%d",&contas[(*tot)].numero);
       printf("Informe o saldo da conta:");
       scanf("%f",&contas[(*tot)].saldo);
       setbuf(stdin,NULL);
       printf("Informe o nome:");
       gets(contas[(*tot)].nome);
       (*tot)++;
   }else{
            printf("Limite excedido... Conta nao pode ser criada\n");
        }
}
/*-------------------------------------------------------*/
void exibirContas(int tot)
{
    int i;
    for (i=0;i<tot;i++)
    {
        printf("****** CONTA: %d\n", contas[i].numero);
        printf("CORRENTISTA: %s\n", contas[i].nome);
        printf("SALDO: %.2f\n", contas[i].saldo);
    }
    if (tot==0)
       printf("Sem contas cadastradas....\n");
    getch();
}
/*-------------------------------------------------------*/
void maiorSaldo(int tot)
{
    int i;
    float maior;
    if  (tot == 0)
        printf("Sem contas cadastradas....\n");
    else{
         maior = contas[0].saldo;
         for (i=1; i<tot; i++)
         {
             if (contas[i].saldo > maior)
                maior = contas[i].saldo;
         }
         for (i=0; i<tot; i++)
         {
             if (contas[i].saldo == maior)
             {
                printf("****** CONTA: %d\n", contas[i].numero);
                printf("CORRENTISTA: %s\n", contas[i].nome);
                printf("SALDO: %.2f\n", contas[i].saldo);
             }
         }
    }
    getch();
}
/*-------------------------------------------------------*/
void pesquisaNome(int tot)
{
    char busca[200];
    int i, achei;
    if (tot==0)
    {
        printf("Sem contas cadastradas....\n");
    }else{
            setbuf(stdin,NULL);
            printf ("Informe o nome a ser pesquisado:");
            gets(busca);
            achei = 0;
            for (i=0;i<tot;i++)
            {
                if (strcmp(busca,contas[i].nome) == 0)
                {
                    printf("****** CONTA: %d\n", contas[i].numero);
                    printf("CORRENTISTA: %s\n", contas[i].nome);
                    printf("SALDO: %.2f\n", contas[i].saldo);
                    achei = 1;
                }
            }
            if (achei == 0)
            {
                printf("Nome nao encontrado...\n");
            }
    }
    getch();
}
/*-------------------------------------------------------*/
void main()
{
    int opcao, totContas = 0;
    do{
        system("cls");
        printf("*-* Sistema Bancario *-*\n");
        printf("1-Cadastrar Conta\n");
        printf("2-Exibir Contas\n");
        printf("3-Conta com Maior Saldo\n");
        printf("4-Pesquisar por Nome\n");
        printf("5-Sair\n");
        printf("Informe sua opcao:");
        scanf("%d",&opcao);
        switch(opcao)
        {
           case 1: cadastrarConta(&totContas);
                   break;
           case 2: exibirContas(totContas);
                   break;
           case 3: maiorSaldo(totContas);
                   break;
           case 4: pesquisaNome(totContas);
                   break;
           case 5: printf("Programa Encerrado!!!!\n");
                   break;
           default: printf("Opcao inválida...\n");
        }
    }while (opcao != 5);
    getch();
}
