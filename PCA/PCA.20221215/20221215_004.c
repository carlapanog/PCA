//20221215_004. Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.

#include <stdio.h>

int main()
{
    float raioC = 0;
    float areaC = 0;
    
    printf("raio do círculo: ");
    scanf("%f", &raioC);
    
    areaC = 3.14 * raioC * raioC;
    printf("\nA área do círculo de raio %f é igual a %f.\n", raioC, areaC);
    
    return 0;
}
