#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    /*
    int valor[6];
    int i;
    for(i=0 ; i < 6 ; i++){
        printf("Digite um valor: ");
        scanf("%d", &valor[i]);
    }

    for(i=0 ; i < 6 ; i++){
        printf("Posicao %d: %d\n", i, valor[i]);
    }
    */


    int matriz[2][2];

    int i , j;
    for(i = 0 ; i < 2 ; i++){
        for(j = 0 ; j < 2 ; j++){
            printf("Digite um valor: ");
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");

    for(i = 0 ; i < 2 ; i++){
        for(j = 0 ; j < 2 ; j++){
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }

   getch();
}
