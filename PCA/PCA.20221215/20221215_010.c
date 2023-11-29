//20221215_010. Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58

#include <stdio.h>

int main()
{
    float altura = 0;
    float pesoIdeal = 0;
    
    printf("digite sua altura: ");
    scanf("%f", &altura);
    
    pesoIdeal = (72.7 * altura) - 58;
    
    printf("\nSeu peso ideal é %f.\n", pesoIdeal);
    
    return 0;
}
