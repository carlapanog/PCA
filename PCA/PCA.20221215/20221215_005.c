//20221215_005. Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

#include <stdio.h>

int main()
{
    float ladoQ = 0;
    float areaQ = 0;
    float dobroAreaQ = 0;
    
    printf("medida do lado do quadrado: ");
    scanf("%f", &ladoQ);
    
    areaQ = ladoQ * ladoQ;
    
    dobroAreaQ = 2 * areaQ;
    printf("\nO dobro da área do quadrado de lado %f é igual a %f.\n", ladoQ, dobroAreaQ);
    
    return 0;
}
