#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main ()

{
    int numero, resultado;

    printf("Informe o primeiro valor:\n");
    scanf("%d",&numero);

    resultado = numero%2;

    if (resultado==0){
        printf("Resto: %d...PAR", resultado);

    }else{

    if (resultado==1)
        printf("Resto: %d...IMPAR", resultado);
    }

    getch();


}
