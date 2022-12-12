#include <stdio.h>
int main()
{
    char ch1;
    printf("Introduza uma letra: ");
    scanf("%c", &ch1);
    printf("\nA letra '%c' tem o seu número ASCII como %d ", ch1,(int) ch1);
    
}
