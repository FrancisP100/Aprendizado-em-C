#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<ctype.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int a, b, c;
    float delta;
    printf("Digite os valores de a, b e c respectivamente: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("a = %d; b = %d; c = %d\n",a, b, c);
    // ? Delta = b² - 4.a.c
    delta = (b * b) - (4 * a * c);
    printf("D = delta\nD = b^2 - 4.a.c\nD = %d^2 - 4x(%dx%d)\nD = %d - (4x%d)\nD = %d - %d\nD = %.2f", b, a, c, b * b, a * c, b * b, 4 * a * c, delta);
    printf("\nDelta é igual a: %.2f",delta); // ? Representar o símbobolo de raíz = \u221A
    
}