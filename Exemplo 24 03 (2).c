#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

void main()
{
    int n1, n2;
    printf("Informe o primeiro numero inteiro: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero inteiro: ");
    scanf("%d", &n2);

    if (n1 == n2)
    {
        printf("Os dois inteiros: iguais! \n");
    }else {
            if (n1>n2)
            {
                printf("O maior: %d\n", n1);
            }else{
                printf("O maior: %d\n", n2);
            }
        }

    getch();

}
