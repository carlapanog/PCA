//20221215_007.  Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius. C = (5 * (F-32) / 9).

#include <stdio.h>

int main()
{
    float tempC = 0;
    float tempF = 0;
    
    printf("temperatura em Celsius: ");
    scanf("%f", &tempC);
    
    tempF = ((9 * tempC) / 5) + 32;
    
    printf("\ntemperatura equivalente, em Farenheit: %f.\n", tempF);
    
    return 0;
}
