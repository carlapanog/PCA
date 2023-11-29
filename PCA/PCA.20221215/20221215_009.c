//20221215_009.  Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre: o produto do dobro do primeiro com metade do segundo. a soma do triplo do primeiro com o terceiro. o terceiro elevado ao cubo.

#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    float num3 = 0;
    
    float conta1 = 0;
    float conta2 = 0;
    float conta3 = 0;
    
    printf("número inteiro: ");
    scanf("%d", &num1);
    
    printf("número inteiro: ");
    scanf("%d", &num2);
    
    printf("número real: ");
    scanf("%f", &num3);
    
    conta1 = (2 * num1) * (num2 / 2);
    
    conta2 = (3 * num1) + num3;
    
    conta3 = num3 * num3 * num3;
    
    printf("\nO produto do dobro do primeiro com metade do segundo é igual a %f.\n", conta1);
    printf("\nA soma do triplo do primeiro com o terceiro é igual a %f.\n", conta2);
    printf("\nO terceiro elevado ao cubo é igual a %f.\n", conta3);
    
    return 0;
}
