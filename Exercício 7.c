#include <stdio.h>
#include <stdlib.h>
int main (void)
{
int numero;
int sucessor;
int antecessor;

printf("informe um numero e eu direi seu sucessor e seu antecessor: ");
scanf("%d",&numero);

sucessor = (numero + 1);
antecessor = (numero - 1);

printf("Antecessor: %d Numero: %d Sucessor: %d \n \n ",antecessor,numero,sucessor);

getch ();

return 0
}
