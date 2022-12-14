#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NUMS 49
#define MIN_APOSTA 6
#define NUM_LINHA 7

void Inic_Random();
void Inic(int v[NUMS]);
int Ler_Ns_Apostar();
void Gerar(int *v, int n);
void Apresentar(int res[]);

void Inic_Random()
{
   long ultime;
   time(&ultime);
   srand((unsigned)ultime);
}

void Inic(int v[])
{
    int i;
    for (i = 0; i < NUMS;i++)
        v[i] = 0;
}

int Ler_Ns_Apostar()
{
    int n;
    do
    {
        printf("Quantos Numbers quer apostar (0 -Terminar); ");
        scanf("%d", &n);
    } while ((n < MIN_APOSTA || n > NUMS) && n != 0);
    return n;
}

void Gerar(int *v, int n)
{
    int i, indice;
    for (i = 1; i <= n; i++)
    {
        indice = rand() % NUMS;

        if (v[indice] ==0)
            v[indice] = 1;
        else
            i--;
    }
    
}

void Apresentar(int res[])
{
    int i;
    for (i = 0; i < NUMS;i++)
    {
        if (res[i] == 0)
            printf(" %2d", i + 1);
        else
            printf(" XX");
    if ( (i+1) % NUM_LINHA == 0)
        putchar('\n');
        }
        putchar('\n');
}
int main(void)
{
    int vector[NUMS];
    int n_nums;

    Inic_Random();
    while(1)
    {
        Inic(vector);
        if ((n_nums = Ler_Ns_Apostar())==0) break;
        Gerar(vector, n_nums);
        Apresentar(vector);
    }
}