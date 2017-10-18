#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

    main()

{
    int n;
    int a = 0, b = 0;

    printf("Informe n:");
    scanf("%d",&n);

    while (n>0)
    {
        if ((n%2)==0)

        a = a + 1;

        else

        b = b + 1;

        n = (n-(n%2))/2;

    }

    printf("%d%d\n", a,b);


    getch();

}
