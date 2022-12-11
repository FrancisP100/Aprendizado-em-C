#include<stdio.h>
int soma(int x,int y)
{
return x + y;
}
int dobro(int x)
{
    return 2 * x;
}

main()
{
    int n1, n2;

    printf("Digite 2 numeros para ver a soma e o dobro de cada um deles\n\n");
    scanf("%d%d",&n1,&n2);
    printf("%d + %d = %d\n",n1,n2,soma(n1,n2));
    printf("2 X %d = %d e 2 X %d = %d\n",n1,dobro(n1),n2,dobro(n2));
 
}