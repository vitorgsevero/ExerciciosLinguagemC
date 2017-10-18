#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()

{
    int numero;
    printf("Informe um numero:");
    scanf("%d", &numero);

    if (numero == 0){
        printf("Zero.\n");

    }else{

        if (numero>0){
            printf("Positivo. \n");
        }else if (numero<0){
            printf("Negativo.\n");
        }
    getch();
}
}


