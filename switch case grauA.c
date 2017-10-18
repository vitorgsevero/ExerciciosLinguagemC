#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int op,s,valortotal;

    printf("Bem-Vindo a lancheria do Xorxe!\n\n");
    printf("Se voce deseja ver o cardapio digite 1, se deseja sair digite 2! ");
    scanf("%d",&s);

    if (s==1){
        printf("\n------------------------------\n");
        printf("   CARDAPIO DO XORXE:\n");
        printf("------------------------------\n\n");
        printf("1 - Cachorro-Quente Bagual R$ 5.\n");
        printf("2 - Xis do Alemao Velho R$ 7.\n");
        printf("3 - Prensado do Cavalo Manco R$ 4.\n");
        printf("4 - Torrada do XORXE R$ 3.\n");
        printf("5 - Carreteiro com a sobra do churras R$ 2.\n");
        printf("6 - Suco de butia que caiu do bolso R$ 2.\n");
        printf("7 - Coca-Cola Gelada R$ 3. \n");
        printf("Digite o numero referente ao seu pedido!");
        scanf("%d",&op);

        switch (op){

        case '1':
            printf("Voce escolheu o Cachorro-Quente Bagual R$ 5.");
        break;

        case '2':
            printf("Voce escolheu o Xis do Alemao Velho R$ 7.");
        break;

        case '3':
            printf("Voce escolheu o Prensado do Cavalo Manco R$ 4.");
        break;

        case '4':
            printf("Voce escolheu a Torrada do XORXE R$ 3.");
        break;

        case '5':
            printf("Voce escolheu o Carreteiro com a sobra do churras R$ 2.");
        break;

        case '6':
            printf("Voce escolheu o Suco de butia que caiu do bolso R$ 2.");
        break;

        case '7':
            printf("Voce escolheu a Coca-Cola Gelada R$ 3.");
        break;

        }
    }

    if (s==2){
        printf("Voce optou por sair do programa...\n");
    }

    getch();
}
