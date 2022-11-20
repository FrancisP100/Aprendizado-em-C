#include <stdio.h>
main()
{
    char genero;
    printf("Introduza o genero(M/F): ");
    scanf("%c",&genero);
    switch (genero)
    {
    case 'm' :
    case 'M' :
        printf("Escolheu o genero Masculino");
             break;
    case 'f' :
    case 'F' :
        printf("Escolheu o genero Feminino");
             break;
    default:
        printf("Genero Invalido");
    }
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
}