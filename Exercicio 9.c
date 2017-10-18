
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)

{
    int numero1;
    int numero2;
    int soma;
    int produto;
    int diferenca;

    printf("Digite um numero: ");
    scanf("%d", &numero1);

    printf("Digite outro numero: ");
    scanf("%d", &numero2);

    soma = (numero1 + numero2);
    produto = (numero1 * numero2);
    diferenca = (numero1 - numero2);


    printf("A soma eh: %d\n", soma);
    printf("O produto eh: %d\n", produto);
    printf("A diferenca eh: %d\n", diferenca);


    getch ();




}
