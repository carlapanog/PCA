//20221215_003. Faça um Programa que converta metros para centímetros.

#include <stdio.h>

int main()
{
    float valorM = 0;
    float valorCm = 0;
    
    printf("Valor em metros: ");
    scanf("%f", &valorM);
    
    valorCm = valorM * 100;
    printf("\n%f metros equivale(m) a %f centímetros.\n", valorM, valorCm);
    
    return 0;
}
