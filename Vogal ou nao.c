#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()

{/*1. Proponha um programa em C que lê um caractere, se classifique-o em VOGAL ou DIFERENTE DE VOGAL.*/
    char letra;

    printf("Informe uma vogal:");
    scanf("%c",&letra);

    if (letra!='a' && letra!='e' && letra!='i' && letra!='o' && letra!='u'){
        printf("Nao eh vogal.");
    }
    else {
        printf("Vogal.");
    }
    getch();
}
