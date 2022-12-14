#include<stdio.h>

main()
{
    char nome[100];

    while(1)
    {
        printf("Introduza o nome(nome completo tambem pode): ");
        gets(nome);
        if(nome[0]=='\0')
        {   printf("Nao introduziu nada...adeus(Fim do programa)");
            break; }
        else
            printf("O nome introduzido foi: %s\n",nome);
    }

}