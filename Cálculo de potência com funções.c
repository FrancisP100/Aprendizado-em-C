#include<stdio.h>

float pot(float x, int n)
{
    float res;
    int i;
    
    for (i = 1 , res = 1.0 ; i<= n ; i++)
      res *= x ;
    return res;
}

main()
{
  float x;
  int n;
  printf("Digite um numero para base e outro para o expoente: \n");
  scanf("%f%d",&x,&n);
  printf("%.1f Expoente %d ---> %.1f",x,n,pot(x,n));

}