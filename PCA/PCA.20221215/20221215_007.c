//20221215_007.  Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius. C = (5 * (F-32) / 9).

#include <stdio.h>

int main()
{
    float tempF = 0;
    float tempC = 0;
    
    printf("temperatura em Farenheit: ");
    scanf("%f", &tempF);
    
    tempC = (5 * (tempF - 32) / 9);
    
    printf("\ntemperatura equivalente, em Celsius: %f.\n", tempC);
    
    return 0;
}
