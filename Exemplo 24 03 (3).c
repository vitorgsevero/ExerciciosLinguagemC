#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

void main()
{
    int numero;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    if (numero == 0)
    {
        printf("O numero nao e positivo nem negativo");
    }else
            if (numero>0)
        {
            printf("Positivo\n");
        }else{
            printf("Negativo\n");
             }

    getch();

}
