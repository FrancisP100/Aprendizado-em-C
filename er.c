#include <stdio.h>
main()
{
    int x,j,h;
    printf("Introduza um numero para");
    printf(" ver a sua tabuada e as 5 seguintes: \n");
    scanf("%d",&x);
     
      for (h = x + 5 ; x <= h ;++x )
    {
       for (j = 1; j <= 12; j = j + 1)
               printf("%2d x %2d = %2d  \n", x, j, x * j);
       fflush(stdin);
       if (x != h)
       {
           printf("Prima <ENTER> para continuar ...\n");
           getchar();
                 }
    }
}