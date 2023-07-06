#include <stdio.h>
espacos(int j)
{
    int espacosx;
       for(espacosx = j;espacosx >= 0 ;espacosx--)
           putchar(' ');
}
/*
* Ex: 4 ramos
* saída:
*    *
*   ***
*  *****
* ******* número de espaços é igual a número de ramos decrementando
*   |||      logo: espaços=número_de_ramos--
*/
folhas(int x)
{
    int folhasx;
    for (folhasx = 1; folhasx <= x;folhasx++)
    {
        if(folhasx > 1)
            putchar('*');
        putchar('*');
    }
}
/* 
* Ramos:4 
*     *
*    ***
*   *****
*  *******
*    ||| 
? Número de folhas começa do um e vai aumentando de 2 em 2 
* Folhas+=2
*/
tronco(int x)
{
    int y;
    y = x - 1;
    espacos(y);
    printf("|||");
}
int main()
{
    int x,i,j;

    printf("Introduza o numero de ramos que tera a ");
    printf("arvore:  \n");
    scanf("%d", &x);
    for (i = 1,j = x; i <= x;i++,j--)
    {
        espacos(j);
        folhas(i);
        putchar('\n');
      }
      tronco(x);
}


 