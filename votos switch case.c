#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main (void)
{
    int voto, totE, totT, brancos, nulos;
    totE = 0;
    totT = 0;
    brancos = 0;
    nulos = 0;
    do{
        printf("1 - Einstein\n");
        printf("2 - Turing\n");
        printf("3 - Branco\n");
        printf("4 - Nulo\n");
        printf("5 - Encerrar votacao...\n");
        do{
            printf("Informe o seu voto: ");
            scanf("%d", &voto);
          }while (voto <1 || voto >5);
        switch(voto)
        {
            case 1: totE = totE+1;
                    break;
            case 2: totT = totT+1;
                    break;
            case 3: brancos = brancos+1;
                    break;
            case 4: nulos = nulos+1;
                    break;
            default: printf("Votacao Encerrada!\n\n");
        }

    }while(voto != 5);
    printf("**** Total de Votos: ****\n");
    printf("\tEinstein: %d\n", totE);
    printf("\tTuring: %d\n", totT);
    printf("\tNulos: %d\n", nulos);
    printf("Percentual de Votos Brancos:\n");
    if ((totE+totT+nulos+brancos)>0)
        printf("\t %.2f \n", (((brancos * 1.0)/(totE+totT+nulos+brancos))*100));
    else printf("Zero.\n");
    getch();
}
