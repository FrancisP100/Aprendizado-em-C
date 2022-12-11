#include<stdio.h>

int abs(int x)
{
    return (x>=0) ? x : -x;
}

main() 
{
    int x;
    printf("Digite um numero e vera* o seu valor absoluto: \n");
    scanf("%d", &x);
    printf("%d --->  %d\n", x, abs(x));
}